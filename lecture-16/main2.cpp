// POINTERS in C++
// Pointers are special variables that store the memory address of another variable.

// Pointer to Pointer
// A pointer that stores the address of another pointer, creating multiple levels of indirection.

#include <iostream>
using namespace std;

int main() {
    int age = 78;            // Regular integer variable
    int* pointer = &age;      // Pointer storing the address of 'age'

    int** pointer2 = &pointer; // Pointer to pointer, storing the address of 'pointer'

    // Output the value of 'pointer' (i.e., the address of 'age')
    cout << "Address stored in pointer (address of 'age'): " << pointer << endl;
    
    // Output the address of 'age' directly (should match the value of 'pointer')
    cout << "Direct address of 'age': " << &age << endl;

    // Output the address of 'pointer' (memory address where 'pointer' is stored)
    cout << "Address of 'pointer': " << &pointer << endl;

    // Output the value of 'pointer2' (i.e., the address of 'pointer')
    cout << "Address stored in pointer2 (address of 'pointer'): " << pointer2 << endl;

    return 0;
}
