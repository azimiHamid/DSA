// Reverse an array

#include <iostream>
using namespace std;

void reverseArr(int arr[], int sz) {
    
    int start = 0;
    int end = sz-1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    } 
}

int main() {

    int arr[] = {84, 90, 59, 43, 83, 40, 8};
    int size = 7;

    reverseArr(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // 8,40,83,43,59,90,84
    }
    return 0;
}