// Homework2: Find if a number is power of 2 ?

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;  // Powers of 2 are positive
    while (n > 1) {
        if (n % 2 != 0) return false;  // If not divisible by 2, return false
        n /= 2;
    }
    return true;  // If we reach 1, it's a power of 2
}

int main() {
    int num = 34;
    if (isPowerOfTwo(num))
        cout << num << " is a power of 2.\n";
    else
        cout << num << " is not a power of 2.\n";
    return 0;
}


// Without Loop
// #include <iostream>
// using namespace std;

// bool isPowerOfTwo(int n) {
//     return n > 0 && (n & (n - 1)) == 0;
// }

// int main() {
//     int num = 34;
//     if (isPowerOfTwo(num))
//         cout << num << " is a power of 2.\n"; // 16 is a power of 2
//     else
//         cout << num << " is not a power of 2.\n";
//     return 0;
// }




