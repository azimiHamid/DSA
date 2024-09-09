// Binary to Decimal
#include <iostream>
using namespace std;

int binaryToDecimal(int binaryNum) {

    int ans = 0, pow = 1;

    while (binaryNum > 0) {
        int rem = binaryNum % 10;
        ans += rem * pow;

        binaryNum /= 10;
        pow *= 2;
    }

    return ans;
}

int main() {
    int binNum = 1010;

    cout << binaryToDecimal(binNum) << endl; // output: 10

    return 0;
}