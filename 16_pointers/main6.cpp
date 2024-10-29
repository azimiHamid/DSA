// ARRAY POINTERS
// Arrays in C++ behave like constant pointers.
// This means that the name of the array holds the address of the first element in the array, 
// and this address is constant (i.e., it cannot be reassigned to point elsewhere).

#include <iostream>
using namespace std;

int main() {

    // Declare and initialize an array with 5 integers
    int arr[] = {110, 120, 130, 140, 150};  
    
    // Output the memory address of the first element of the array
    // 'arr' itself is a pointer to the first element (arr[0])
    cout << "Memory address of the first element (arr): " << arr << endl;

    // Dereferencing the array name 'arr' gives us the first element of the array
    cout << "Value of the first element (*arr): " << *arr << endl;

    // Trying to reassign the array pointer will result in an error because arrays are constant pointers
    int a = 15, b = 19;

    // arr = &a; // ❌ This will throw an error as arrays are constant pointers and can't be reassigned

    // However, regular pointers can be reassigned freely
    int *ptr = &a;  // 'ptr' is pointing to the address of 'a'
    ptr = &b;  // Now 'ptr' points to the address of 'b'
    cout << "Pointer (ptr) now points to value: " << *ptr << endl;  // Output: 19

    return 0;
}
