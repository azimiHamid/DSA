// Bitwise Operator:  
// AND(&)  
// OR(|)
// XOR (^) --> (Exclusive OR)
// Left Shift operator (<<)
// Right Shift operator (>>)

#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 8;

    cout << (a & b) << endl; // output: 0
    cout << (a | b) << endl; // output: 12
    cout << (a ^ b) << endl; // output: 12
    return 0;
}