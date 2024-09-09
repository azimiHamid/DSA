// Homework 1: A function which checks if a number is prime or not ?

#include <iostream>
using namespace std;

int checkPrime(int n) {

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    }

    for (int i=2; i<n; i++) {
        if (n%i == 0) {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

int main() {
    int n;
    cout << "Enter a Number: ";  // 7
    cin >> n;

    if (checkPrime(n)) {
        cout << "Prime\n";  // output: Prime
    } else {
        cout << "Not Prime\n";
    }
    
    return 0;
}