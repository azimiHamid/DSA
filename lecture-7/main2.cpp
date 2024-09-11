// Operator Precedence

#include <iostream>
using namespace std;

int main() {

    cout << 5 - 2 * 6 << endl;    // -7
    cout << (5 - 2) * 6 << endl;  // 18
    cout << 4 * 5 % 2 << endl;    // 0  --> if you faced same level operators,
                                  // use left hand law (left -> right)
    
    return 0;
}
