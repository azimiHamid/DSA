// Character Arrays in C++
// A character array is a sequence of characters stored in contiguous memory, ending with a null character '\0'.
// Syntax Example 1 : char str[] = {'a', 'b', 'c', '\0'}; // manually defined null terminator
// Syntax Example 2 : char str[] = "Hello world"; // automatically adds '\0' at the end

#include <iostream>
using namespace std;

int main() {
    // Initializing a character array with a string literal
    char str[] = "Hello world"; // stored as H|e|l|l|o| |w|o|r|l|d|\0
    int len = 0;

    // Accessing and printing the 3rd character in the character array (index 2)
    cout << "Third character: " << str[2] << endl;

    // Calculating the length of the character array manually (excluding null terminator)
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }

    cout << "Length of character array: " << len << endl;

    return 0;
}
