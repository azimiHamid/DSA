// Homework 2: A function which prints all the prime numbers from 2 - N ?

#include <iostream>
using namespace std;

int checkPrime(int m) {
    bool isPrime = true;

    if (m <= 1) {
        isPrime = false;
    }

    for (int i = 2; i < m; i++) {
        if (m % i == 0) {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

void printPrimes(int n) {

    for (int i = 2; i < n; i++) {
        if (checkPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {

    int n = 40;
    printPrimes(n);  // output: 2 3 5 7 11 13 17 19 23 29 31 37 
    
    return 0;
}