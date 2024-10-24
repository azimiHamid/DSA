// Sort an Array of 0s, 1s & 2s | Leetcode 75

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brut-Force Approach
// void sortColors(vector<int> &nums) {
//     sort(nums.begin(), nums.end());
// }


// Optimized Approach
// void sortColors(vector<int> &nums) {
//     int n = nums.size();
//     int count0 = 0, count1 = 0, count2 = 0;
//     for (int i = 0; i < n; i++) {
//         if (nums[i] == 0) count0++; 
//         if (nums[i] == 1) count1++; 
//         if (nums[i] == 2) count2++;
//     }
//     cout << count0 << count1 << count2 << endl;

//     int idx = 0;
//     for (int j = 0; j < count0; j++) {
//         nums[idx] = 0;
//         idx++;
//     }
//     for (int j = 0; j < count1; j++) {
//         nums[idx] = 1;
//         idx++;
//     }
//     for (int j = 0; j < count2; j++) {
//         nums[idx] = 2;
//         idx++;
//     }
    
// }


// Most Optimal way - Dutch national flag algorithm
void sortColors(vector<int> &nums) {
    int n = nums.size();
    int low = 0, mid = 0, high = n-1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {

    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    sortColors(nums);
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}