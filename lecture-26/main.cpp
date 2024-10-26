// Merge 2 Sorted Arrays Problem

#include <iostream>
#include <vector>
using namespace std;

void mergeArrays(vector<int> &arr1, vector<int> &arr2) {
    int m = 3; // Number of actual elements in arr1
    int n = arr2.size();

    // Index pointers for arr1, arr2, and merged array from the back
    int i = m - 1; // 2
    int j = n - 1; // 2
    int k = (m + n) - 1; //5

    // Merge arr2 into arr1 from the end
    while (j >= 0) {
        if (i >= 0 && arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            k--; i--;
        } else {
            arr1[k] = arr2[j]; 
            k--; j--;
        }
    }
}

int main() {

    vector<int> arr1 = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};
    mergeArrays(arr1, arr2);

    for (int num : arr1) {
        cout << num << " ";
    }

    return 0;
}