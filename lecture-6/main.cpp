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

// int decToBinary(int decNum) {
//     int ans = 0, pow = 1;

//     while (decNum > 0) {
//         int rem = decNum % 2;
//         decNum = decNum / 2;

//         ans += (rem * pow);
//         pow *= 10;
//     }
//     return ans;
// }

// int main() {
//     // int decNum = 10;
//     int n = 10;
//     cout << "Decimal ---> " << "Binary\n";
//     for (int i = 1; i < n; i++) {
//         cout << "Binary of " << i << " = " << decToBinary(i) << endl;
//     }
//     return 0;
// }




// int result = 0, pow = 1;

int decToBin(int n) {
    int res = 0;
    int pow = 1; 

    while (n > 0) {         // n=10
        int rem = n % 2;
        n /= 2;

        res += rem * pow; // 0*10^0=0,  1*10^1=10,  0*10^2=100,  1*10^3=1000
        pow *= 10;        // pow = 1,   pow=1*10,   pow=10*10,   pow=100*10
    }

    return res;
}

int main() {
    int decN = 10;
    cout << decToBin(decN) << endl;

    return 0;
}