// DEREFERENCE OPERATOR (*) and (**)
// The dereference operator (*) is used to access the value stored at the memory address held by a pointer.
// When dealing with pointer-to-pointer (**), you can dereference twice to access the value of the original variable.

#include <iostream>
using namespace std;

int main() {

    int a = 10;                // Regular integer variable
    int* pointer = &a;         // 'pointer' stores the address of 'a'
    int** parentPointer = &pointer; // 'parentPointer' stores the address of 'pointer'

    // Dereferencing the address of 'a' directly (same as 'a' itself)
    cout << "Value of 'a' via direct dereference: " << *(&a) << endl;

    // Dereferencing 'pointer' gives the value of 'a' (since 'pointer' holds the address of 'a')
    cout << "Value of 'a' via 'pointer': " << *(pointer) << endl;

    // Dereferencing 'parentPointer' once gives the address stored in 'pointer'
    cout << "Address stored in 'pointer' via 'parentPointer': " << *(parentPointer) << endl;

    // Dereferencing 'parentPointer' twice gives the value of 'a' (since **parentPointer accesses the value of 'a')
    cout << "Value of 'a' via 'parentPointer': " << **(parentPointer) << endl;

    return 0;
}
