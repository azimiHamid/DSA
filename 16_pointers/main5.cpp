// PASS BY VALUE
// PASS BY REFERENCE/alias (directly)
// PASS BY POINTER

#include <iostream>
using namespace std;

// Pass by Reference using alias (a): Modifies the original variable directly without needing a pointer.
// The '&' symbol means that 'a' is a reference to the actual variable passed to the function.
void changeByReference(int &a) {
    a = 50;  // Modifies the original variable (no copy is made)
}

// Pass by Pointer: Modifies the original variable by using a pointer.
// The '*' symbol means we're dealing with a pointer, and we dereference it to access the original variable.
void changeByPointer(int* a) {
    *a = 50;  // Dereferences the pointer to modify the original variable
}

int main() {
    int x = 10;  // Initialize variable x with the value 10
    
    // Pass by Reference: No need to use '&' in the function call; the reference is implicit.
    // The value of 'x' is modified directly inside the function.
    changeByReference(x);  
    cout << "Modified x by reference: " << x << endl;  // Output: 50

    // Pass by Pointer: We pass the address of 'x' using '&' so the function can modify the original variable.
    // The pointer allows us to change the value of 'x' through its memory address.
    changeByPointer(&x);  
    cout << "Modified x by pointer: " << x << endl;  // Output: 50

    return 0;
}



// Summary:
// Pass by Reference is cleaner and simpler for most cases where you want to modify variables directly.
// Pass by Pointer is more flexible for advanced use cases, like handling NULL, working with arrays, managing dynamic memory, or using multiple levels of indirection.