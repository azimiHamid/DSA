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

bool isValidBinary(int n) {
    while (n > 0) {
        if (n % 10 > 1) {
            return false;
        }
        n /= 10;
    }
    return true;
}

char getUserChoice() {
    char choice;
    bool validInput = false;

    while (!validInput == true) {
        cout << "\nWhat do you want to do? (Please select A or B)\n";
        cout << "A) Change a Decimal number to Binary\n";
        cout << "B) Change a Binary number to Decimal\n";
        cin >> choice;

        if (choice == 'A' || choice == 'B' || choice == 'a' || choice == 'b') {
            validInput = true;
        } else {
            cout << "\n-----------------------------------\nInvalid input! Please enter A or B.\n-----------------------------------\n";
            cin.clear(); // Clear the error flag set by invalid input
        }
    }
    return choice;
}

bool shouldContinue() {
    char ch;
    cout << "Press [Y] to continue or [N] to quite : ";
    cin >> ch;
    // return !(ch == 'N' || ch == 'n');  // !(true) = false
    if (ch == 'N' || ch == 'n') {
        return false;
    } else {
        return true;
    }
}

void handleDecToBin() {
    int num;
    cout << "Please enter a Decimal number: ";
    cin >> num;
    if (num < 0) {
        cout << "Invalid input! Decimal numbers must be non-negative.\n";
    } else {
        cout << "Binary of " << num << " = " << decToBin(num) << endl;
    }
}

void handleBinToDec() {
    int num;
    cout << "Please enter a Binary number (includes 0s & 1s only): ";
    cin >> num;
    if (isValidBinary(num)) {
        cout << "Decimal of " << num << " = " << binToDecimal(num) << endl;
    } else {
        cout << "Invalid input! Binary numbers must contain only 0s and 1s.\n";
    }
}

int main() {

    bool goAgain = true;

    while (goAgain) {
        char userChoice = getUserChoice(); 

        double num;
        if (userChoice == 'A' || userChoice == 'a') {
            handleDecToBin();

        } else if (userChoice == 'B' || userChoice == 'b') {
            handleBinToDec();
        }

        goAgain = shouldContinue();
    }

    return 0;
}