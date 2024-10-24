// Selection Sort Algorithm

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Assume the current position is the minimum
        for (int j = i + 1; j < n; j++) {  // Find the minimum element in unsorted part
            // if (arr[j] > arr[minIndex]) {  // Descending
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Update the minimum element's index
            }
        }
        // Swap the minimum element with the first element in unsorted part
        swap(arr[i], arr[minIndex]);
    }
}

int main() {

    vector<int> arr = {4, 1, 5, 2, 3};

    cout << "Unsorted Array: ";
    for (size_t val : arr) {
        cout << val << " ";
    }
    cout << endl;


    selectionSort(arr);


    cout << "Sorted Array: ";
    for (size_t val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}