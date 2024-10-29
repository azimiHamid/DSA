// NULL POINTER
// A null pointer is a pointer that doesn't point to any valid memory address.
// It's generally initialized to NULL or nullptr to signify that it points to nothing.

#include <iostream>
using namespace std;

int main() {

    int** ptr = NULL;  // Pointer-to-pointer initialized to NULL (points to nothing)

    // Output the value of 'ptr', which is currently NULL
    cout << "Value of ptr (NULL): " << ptr << endl;  

    // Attempting to dereference 'ptr' will result in an error
    // because it doesn't point to a valid memory address (it's NULL).
    // This will cause a runtime error (segmentation fault).
    cout << *ptr << endl;  // ❌ Dereferencing a NULL pointer leads to undefined behavior

    return 0;
}
