// Memory Addresses in C++
//
// When a variable is created in C++, it is stored in a specific location in the computer's memory.
// Each memory location has a unique "address," which we can access and print.
//
// To print the memory address of a variable, we use the '&' (address-of) operator.
// The address is typically shown in hexadecimal format (base-16), which is more compact than decimal numbers.

#include <iostream>
using namespace std;

int main() {

    int age = 69;
    // Print the memory address of the variable 'age'
    // The output will be a hexadecimal number like 0xc2547ff6fc
    cout << &age << endl;
    
    return 0;
}


// If you run the program multiple times, you will notice that the address of the 'age' variable changes.
// But why does this happen?

// well, The reason you get different memory addresses each time you run the program is because of Address Space Layout Randomization (ASLR). This is a security feature used by modern operating systems to prevent certain types of attacks. Each time the program runs, the memory layout (including where variables are stored) is randomized, so the address of the variable changes.

// This is done to make it harder for attackers to predict where data is stored in memory.