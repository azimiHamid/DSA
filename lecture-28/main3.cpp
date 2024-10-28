// Strings - part 2: Working with strings in C++

#include <iostream>
using namespace std;

int main() {

    // Example of getting the length of a string
    string str = "Hamid Azimi"; // Initialize a string with value "Hamid Azimi"
    cout << "Length of str: " << str.length() << " characters" << endl; // Outputs the length of the string

    // Input using `getline()` (reads an entire line, including spaces)
    string input1;
    cout << "Enter your input: ";
    getline(cin, input1); // `getline` reads a full line of text, including spaces
    cout << "You entered: " << input1 << endl;

    // Input using `cin` (only reads up to the first whitespace)
    string input;
    cout << "Enter another input (single word): ";
    cin >> input; // `cin` stops reading input at the first space
    cout << "You entered: " << input << endl;

    // Example of iterating over a string using a range-based for loop
    cout << "Characters in str: ";
    for (char ch : str) { // Loop through each character in the string
        cout << ch << " "; // Output each character followed by a space
    }
    cout << endl;

    return 0;
}
