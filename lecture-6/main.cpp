// Decimal into Binary

#include <iostream>
using namespace std;

//* My Attempt
// void decimalToBinary(int n) {
//     string binary = "";

//     while (n > 0) {
//         binary = to_string(n % 2) + binary;
//         n = n / 2;
//     }
//     cout << binary;
// }

// int main() {
//     int decNumber = 6;

//     cout << "Binary of " << decNumber << " = ";
//     decimalToBinary(decNumber);

//     return 0;
// }


// SHKp method

int decToBinary(int decNum) {
    int ans = 0, pow = 1;

    while (decNum > 0) {
        int rem = decNum % 2;
        decNum = decNum / 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main() {
    // int decNum = 10;
    int n = 10;
    cout << "Decimal ---> " << "Binary\n";
    for (int i = 1; i < n; i++) {
        cout << "Binary of " << i << " = " << decToBinary(i) << endl;
    }
    return 0;
}