// Loops on Array

#include <iostream>
using namespace std;

int main() {

    int size = 5;  // Size of the array
    int marks[size];

    // Calculate the size of the array in elements.
    int sz = sizeof(marks) / sizeof(marks[0]); // Total bytes / bytes per int = 20 / 4 = 5
    // The array has 5 elements, each int takes 4 bytes in memory.

    // Input values into the array.
    for (int i = 0; i < sz; i++) {
        cin >> marks[i];
    }

    // Print array values (from 0 to size-1).
    for (int i = 0; i < sz; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}
