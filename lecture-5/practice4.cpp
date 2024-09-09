// Practice Q4: Calculate nCr binomial coefficient for n & r ?
#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;

    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) {
    
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_minus_r = factorial(n-r);

    int nCr = fact_n / (fact_r * fact_n_minus_r);
    return nCr;
}

int main() {

    int n = 8, r = 2;

    cout << "nCr for n=" <<n << " & r=" << r << " is: " << nCr(n, r) << endl;
    


    return 0;
}
