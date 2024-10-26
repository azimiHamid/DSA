// Merge 2 Sorted Arrays Problem

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // Index pointers for arr1, arr2, and merged array from the back
    int i = m - 1; // 2
    int j = n - 1; // 2
    int k = (m + n) - 1; //5

    // Merge arr2 into arr1 from the end
    while (j >= 0) {
        if (i >= 0 && nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            k--; i--;
        } else {
            nums1[k] = nums2[j]; 
            k--; j--;
        }
    
    }
}

int main() {

    vector<int> arr1 = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};
    int m = 3; // Number of actual elements in arr1
    int n = arr2.size(); // Number of elements in arr2

    merge(arr1, m, arr2, n);

    for (int num : arr1) {
        cout << num << " ";
    }

    return 0;
}