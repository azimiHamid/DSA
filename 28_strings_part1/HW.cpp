// Palindrom Checker

#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrom(string str) {

    string reversedStr = str; // a Copy of the str
    reverse(reversedStr.begin(), reversedStr.end());

    if (str == reversedStr) return true;
    return false;
}


int main() {

    cout << "Welcome to Palindrom Checker\n";
    cout << "Enter your text : ";

    string str;
    getline(cin, str);
    bool res = isPalindrom(str);

    res ? cout << "Yes, it is Palindrom." : cout << "No, it is not Palindrome.\n";

    return 0;
}