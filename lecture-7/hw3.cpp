// Homework3: A function which reverse an integer N ?

#include <iostream>
using namespace std;

int reverseInteger(int N) {
    int reversedNumber = 0;
    
    while (N != 0) {
        int lastDigit = N % 10;         
        reversedNumber = reversedNumber * 10 + lastDigit;  
        N /= 10;                        
    }
    
    return reversedNumber;
}

int main() {
    int num = 1234;
    int reversed = reverseInteger(num);
    
    cout << "Reversed number: " << reversed << endl;
    
    return 0;
}
