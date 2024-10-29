// Next Permutation Problem

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int pivot = -1;

    // Step 1: Identify the pivot (rightmost position where nums[i] < nums[i + 1])
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            pivot = i;
            break;
        }
    }

    // If the entire array is non-increasing, reverse to get the smallest permutation
    if (pivot == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }

    // Step 2: Find the smallest number on the right of the pivot that is larger than nums[pivot]
    for (int i = n - 1; i > pivot; i--) {
        if (nums[i] > nums[pivot]) {
            swap(nums[i], nums[pivot]);
            break;
        }
    }

    // Step 3: Reverse the suffix starting from pivot + 1 to get the next permutation in order
    int i = pivot + 1;
    int j = n - 1;
    while (i < j) { 
        swap(nums[i], nums[j]);
        i++;
        j--;
    }

    // Alternatively, reverse function can be used as well
    // reverse(nums.begin() + pivot + 1, nums.end());
}


int main() {

    vector<int> arr = {1,2,3};
    cout << "All 6 permutaions of arr = {1,2,3}\n";

    int m = 0;
    while (m < 6) {
        nextPermutation(arr);
        for (int val : arr) {
            cout << val << " ";
        }
        cout << endl;
        m++;
    }

    return 0;
}