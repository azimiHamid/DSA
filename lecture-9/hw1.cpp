// A function which reverse a vector - pass by reference?

#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &nums, int sz) {
    int start = 0;
    int end = sz-1;

    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        start++;
        end--;
    }
}

int main() {

    vector<int> nums = {1, 2, 3, 4, 5};
    int size = nums.size();
    
    cout << "Original Vector:" << endl;
    for (int num: nums) {
        cout << num << " ";
    }

    reverseVector(nums, size);

    cout << "\nReversed Vector:" << endl;
    for (int num: nums) {
        cout << num << " ";
    }
    
    return 0;
}
