//* Search in Rotated Sorted Array

#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    
    int st = 0, end = nums.size() - 1;

    while (st <= end) {

        int mid = st + (end - st) / 2;
        if (target == nums[mid]) return mid;

        if (nums[st] <= nums[mid]) { // Check if the LEFT half is sorted

            if (target >= nums[st] && target < nums[mid]) { 
                end = mid - 1;
            } else { 
                st = mid + 1;
            }
        } 
        else { // Otherwise, the RIGHT half must be sorted
        
            if (target > nums[mid] && target <= nums[end]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {

    int target = 2;
    vector<int> arr = {3,4,5,6,7,0,1,2};
    
    int result = search(arr, target);
    cout << "Target FOUND at index : " << result << endl;

    return 0;
}