// POINTERS in C++
// Special variables that store address of other varibales.

//  Pointer to Pointer
//   Store the address of another pointer.

#include <iostream>
using namespace std;

int main() {
    int age = 78;
    int* pointer = &age;  // pointer

    int** pointer2 = &pointer;

    cout << pointer << endl;
    cout << &age << endl;

    cout << &pointer << endl; // memory address of pointer
    cout << pointer2 << endl; // pointer2

    return 0;
}