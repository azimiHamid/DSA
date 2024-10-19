// Single Element in Sorted Array - Binary Search

#include <iostream>
#include <vector>
using namespace std;

// Brute-Force Approach - Linear serch
// int singleNonDuplicate(vector<int>& nums) {
//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] != nums[i+1] && nums[i] != nums[i-1]) {
//             return nums[i];
//         }
//     }

//     return -1;
// }


// Optimal Approach - Binary search
// int singleNonDuplicate(vector<int>& nums) {
//     int start = 0, end = nums.size() - 1;
//     while(start < end) {
        
//         int mid = start + (end-start)/2;

//         if (mid % 2 != 0) {
//             mid--;
//         }

//         if (nums[mid] == nums[mid+1]) {
//             start = mid + 2; // Since arr[mid] and arr[mid + 1] form a valid pair, the single element must be after this pair.
//                                 // Therefore, we skip the pair by jumping 2 steps ahead (start = mid + 2) to continue the search.

//         } else {
//             end = mid;
//         }
//     }

//     return nums[start];
// }



// Optimal Approach - Binary search (Another method)
int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size(), st = 0, end = n - 1;

    if (n == 1) return nums[0];

    while (st <= end) {
        int mid = st + (end-st)/2;

        if (mid == 0 && nums[mid] != nums[mid+1]) return nums[mid];
        if (mid == n-1 && nums[mid-1] != nums[mid]) return nums[mid];

        if (nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) {
            return nums[mid];
        }

        if (mid % 2 == 0) { // even
            if (nums[mid-1] == nums[mid]){
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        } else { // odd
            if (nums[mid-1] == nums[mid]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return -1;
}


int main() {

    vector<int> nums = {3, 3, 7, 7, 10, 11, 11};
    // vector<int> nums = {1, 1, 2, 3, 3, 7, 7, 11, 11};
    // vector<int> nums = {1, 1, 2, 2, 3, 3, 7, 11, 11};
    cout << "Single Element: " << singleNonDuplicate(nums) << endl;

    return 0;
}
