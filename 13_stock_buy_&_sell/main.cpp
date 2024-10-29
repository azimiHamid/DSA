// Pow(X,N) Power exponential Problem - Leetcode Qs-50
// Time complecity = O(log n)

#include <iostream>
using namespace std;

double myPow(double x, int n) {

    if (n == 0) return 1;
    if (x == 0) return 0;
    if (x == 1) return 1;
    if (x == -1 && n % 2 == 0) return 1;
    if (x == -1 && n % 2 != 0) return -1;

    double ans = 1;
    long long N = n;

    // Brute-force approach - O(n)
    // for (long long i = 0; i < N; i++) {
    //     ans = ans * x;
    // }


    if (N < 0) {
        x = 1/x;
        N = -N;
    }

    // Optimal approach - O(log n)
    while (N > 0) {

        if (N % 2 == 1) {
            ans *= x;
        }

        x *= x;
        N /= 2;
    }

    return ans;
}


int main() {

    cout << myPow(2, -2) << endl;
    cout << myPow(2, 2) << endl;
    cout << myPow(999, 0) << endl;
    cout << myPow(0, 100) << endl;
    cout << myPow(1, 100) << endl;
    cout << myPow(-1, 23) << endl;

    return 0;
}
