// Selection Sort Algorithm

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {

        int smallestIdx = i;

        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[smallestIdx]) {
                smallestIdx = j;
            }
        }

        swap(arr[i], arr[smallestIdx]);
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