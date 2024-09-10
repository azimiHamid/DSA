#include <iostream>
using namespace std;

double decToBin(int n) {
    double res = 0, pow = 1;

    while (n > 0) {
        int rem = n % 2;
        n /= 2;

        res += rem * pow;
        pow *= 10;
    }
    return res;
}

int binToDecimal(int n) {
    int res = 0, pow = 1; 

    while (n > 0) {
        int rem = n % 10;
        n = n / 10;

        res += rem * pow;
        pow *= 2;
    }
    return res;
}

int main() {

    bool goAgain = true;

    while (goAgain) {
        char userChoice;
        cout << "What do you want to do? (Please select A or B)\n";
        cout << "A) Change a Decimal number to Binary\n";
        cout << "B) Change a Binary number to Decimal\n";
        cin >> userChoice;

        int num;
        if (userChoice == 'A' || userChoice == 'a') {
            cout << "Please enter a Decimal number : ";
            cin >> num;
            cout << "Binary of " << num << " = " << decToBin(num) << endl;
            goAgain = false;

        } else if (userChoice == 'B' || userChoice == 'b') {
            cout << "Please enter a Binary number (includes 0s & 1s only) : ";
            cin >> num;
            cout << "Decimal of " << num << " = " << binToDecimal(num) << endl;
            goAgain = false;

        } else {
            cout << "\n-------------------------\nInvalid input! Try again.\n-------------------------\n";
        }

        char ch;
        cout << "Press [Y] to continue or [N] to quite : ";
        cin >> ch;
        if (ch == 'N' || ch == 'n') {
            goAgain = false;
        }

    }

    return 0;
}