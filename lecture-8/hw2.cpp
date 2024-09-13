// HomeWork:
// 1. Calculate sum and product of all numbers in array
// 2. Swap the max and min number of an array

#include <iostream>
using namespace std;

void sumProduct(int arr[], int sz) {
    int sum = 0;
    int product = 1;

    for (int i = 0; i < sz; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum = " << sum << "\nProduct = " << product << endl;
}

void minMax(int arr[], int sz) {
    if (sz < 2) return; // no need to swap for arrays of size 1 or less
    int minIdx = 0, maxIdx = 0;

    for (int i = 1; i < sz; i++) {
        if (arr[i] < arr[minIdx]) {
            minIdx = i;
        }
        if (arr[i] > arr[maxIdx]) {
            maxIdx = i;
        }
    }
    
    int temp = arr[minIdx];
    arr[minIdx] = arr[maxIdx];
    arr[maxIdx] = temp;
}


int main() {

    int arr[] = {10, 3, 5, 7, 8, 2}; 
    int size = sizeof(arr)/sizeof(arr[0]);

    sumProduct(arr, size); // 35, 16800
    minMax(arr, size); // 2 3 5 7 8 10

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}