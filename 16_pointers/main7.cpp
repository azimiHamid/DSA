// POINTER ARITHMETIC
// Pointer arithmetic allows you to move a pointer to point to different memory locations.
// Operations like ptr++, ptr--, ++ptr, etc., are used to move the pointer by units of the data type it points to.

#include <iostream>
using namespace std;

int main() {

    int a = 23;
    int* ptr = &a;  // Initialize pointer 'ptr' to point to the address of 'a'

    // Output the initial memory address stored in 'ptr' (address of 'a')
    cout << "Original pointer address (ptr): " << ptr << endl;

    // Pointer arithmetic: Increment the pointer to move it to the next memory location.
    // Since 'ptr' is an int pointer, ptr++ moves the pointer by the size of an integer (typically 4 bytes).
    //ptr++;  // Increment the pointer by one integer unit (4 bytes for int)
    ptr += 2; // Increment the pointer by two integer unit (8 bytes for int)

    // Output the new memory address after incrementing the pointer
    cout << "Pointer address after ptr+2: " << ptr << endl;

    // Note: ptr now points to a memory location 4 bytes ahead of where 'a' is stored.
    // This could be outside the range of valid memory for your variables, so dereferencing ptr now would be unsafe.

    return 0;
}
