// Algorithms : sort()
// Demonstrating Sorting Algorithms with Arrays and Vectors in Ascending and Descending Order

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    // Array sorting in ascending order
    int arr[] = {3, 5, 1, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort entire array in ascending order
    sort(arr, arr + n);
    cout << "Array sorted in ascending order: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    // Vector sorting in ascending order
    vector<int> vec = {5, 4, 2, 6, 9, 0};

    // Sort vector in ascending order
    sort(vec.begin(), vec.end());
    cout << "Vector sorted in ascending order: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // Vector sorting in descending order
    sort(vec.begin(), vec.end(), greater<int>());
    cout << "Vector sorted in descending order: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
