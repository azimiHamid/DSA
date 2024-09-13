// HomeWork:
// 3. Print all the unique values in an array?

#include <iostream>
using namespace std;

void printUniqueValues(int arr[], int sz) {

    for (int i = 0; i < sz; i++) {

        bool unique = true;

        for (int j = 0; j < sz; j++) {
            if (arr[i] == arr[j] && i != j) {
                unique = false;
                break;
            }
        }

        if (unique) {
            cout << arr[i] << " ";
        }
    }
}

int main() {

    int arr[] = {2, 3, 2, 5, 6, 5, 7, 7, 8}; 
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Unique values: ";
    printUniqueValues(arr, size);

    return 0;
}