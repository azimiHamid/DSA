// Insertion Sort Algorithm

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i-1;
        // while (prev >= 0 && arr[prev] < curr) {  // Descending
        while (prev >= 0 && arr[prev] > curr) {  // Ascending
            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr; //placing the curr element in it's correct position
    }

}

int main() {

    vector<int> arr = {4, 1, 5, 2, 3};

    cout << "Unsorted Array: ";
    for (size_t val : arr) {
        cout << val << " ";
    }
    cout << endl;


    insertionSort(arr);


    cout << "Sorted Array: ";
    for (size_t val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}