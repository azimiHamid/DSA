// POINTER ARITHMETIC (subtraction)
// Pointer addition (ptr1 + ptr2) is not allowed in C++.
// Pointer subtraction (ptr1 - ptr2) is allowed, but only if both pointers point to elements of the same type.
// The result of subtracting two pointers gives the distance between them in terms of the number of elements.

#include <iostream>
using namespace std;

int main() {

    int a = 23;
    int b = 44;

    // Initialize two integer pointers pointing to different variables
    int* ptr1 = &a;  
    int* ptr2 = &b;

    // Output the memory addresses held by the pointers
    cout << "Pointer 1 (ptr1) address: " << ptr1 << endl;  
    cout << "Pointer 2 (ptr2) address: " << ptr2 << endl;

    // Subtracting two pointers:
    // The result is the number of elements (in terms of int size) between the two addresses.
    // Since both pointers point to integers, the subtraction calculates the difference in memory units (4 bytes per int).
    cout << "Difference between ptr1 and ptr2 (ptr1 - ptr2): " << (ptr1 - ptr2) << endl;

    // Note: The output will be the distance between the two memory locations in integer units.
    // If the pointers are not pointing to adjacent or nearby memory locations, the result can be a negative number.

    return 0;
}
