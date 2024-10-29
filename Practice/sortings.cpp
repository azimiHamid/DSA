// Bubble sort - Selection sort - Insertion sort

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr) {

    int n = arr.size();

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

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


void insertionSort(vector<int> &arr) {
    
    int n = arr.size();

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {

    vector<int> arr = {7, 8, 3, 1, 2};
    // bubbleSort(arr);
    selectionSort(arr);
    // insertionSort(arr);

    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}