//* DataStructures:
// Arrays are the first data structure we'll learn.

#include <iostream>
using namespace std;

int main() {

    // Array with size 50, initialized with 5 values.
    int marks[50] = {99, 88, 56, 32, 100}; 

    // Array of size 3, size inferred from the values.
    double price[] = {99.99, 100.67, 23.00};

    // Modify an element in the array.
    marks[3] = 67;

    // Access array values by index (0 to size-1).
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    return 0;
}
