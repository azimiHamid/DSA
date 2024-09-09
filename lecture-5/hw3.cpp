// Homework 3: A function which prints nth fibonacci ?

#include <iostream>
using namespace std;

void printFibonacci(int n) {  
    int first = 0;
    int second = 1;
    for (int i = 0; i <= n; i++) {
        cout << first << " ";

        int next = first + second; // calculate the next number in the sequence
        first = second;
        second = next; 
    }
}

int main() {
    int n = 10;
    printFibonacci(n);  // output: 0 1 1 2 3 5 8 13 21 34 55

    return 0;
}