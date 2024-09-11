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

    cout << (a & b) << endl;    // output: 0
    cout << (a | b) << endl;    // output: 12
    cout << (a ^ b) << endl;    // output: 12
    cout << (4 << 1) << endl;   // output: 8
    cout << (10 << 2) << endl;  // output: 40
    cout << (10 >> 1) << endl;  // output: 5
    cout << (8 >> 2) << endl;  // output: 2
    return 0;
}