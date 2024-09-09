#include <iostream>

using namespace std;

// This function does not return any value (void).
void printHello() {
    cout << "Hello Everyone." << endl;
}

// This function returns an integer value.
// The return type 'int' indicates that the function returns an integer.
int sum(int a, int b) {
    // Local variables (x and y) are declared but not used in this function.
    // The values of 'a' and 'b' are reassigned within the function.
    a = 30;
    b = 20;
    int result = a + b; // Calculate the sum of 'a' and 'b'
    return result; // Return the computed sum
}

int main() {
    int num = 3;
    printHello(); // Call the function that prints a greeting

    // Call the sum function but do not use its return value
    sum(15, 13); 

    // Print the value of 'num'
    cout << num << endl;
    
    // Call the sum function and print its returned value
    cout << "Sum = " << sum(4, 6) << endl;

    // cout << 1 % 10 << endl;
    // cout << 1 / 10 << endl;
    

    return 0;
}
