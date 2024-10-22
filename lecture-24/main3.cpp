// Insertion Sort Algorithm

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr) {
    int n = arr.size();
    //

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