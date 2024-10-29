// Strings in C++: Using the std::string Class
// The `std::string` class in C++ offers many convenient functions for string manipulation, unlike character arrays.

#include <iostream>
using namespace std;

int main() {
    // Initializing a string using std::string
    string str = "KBL University"; 
    cout << "Initial string: " << str << endl;

    // Reassigning a new value to the string, resizing dynamically at runtime
    str = "Hamid";
    cout << "Modified string: " << str << endl;

    // Attempting to do the same with a character array
    char chArr[] = "KBL University";
    // chArr = "Hamid"; // ❌ Error: Cannot reassign or resize a character array dynamically

    // String Concatenation: Using + operator for combining strings
    string str2 = "Afg";
    string str3 = str + str2; // Concatenates "Hamid" and "Afg" to form "HamidAfg"
    cout << "Concatenated string: " << str3 << endl;

    // String Comparison: Lexicographical (dictionary-like) comparison
    // Checks if "Afg" (str2) is less than "HamidAfg" (str3) in dictionary order
    cout << "Is str2 < str3? : " << (str2 < str3) << endl;  // 1 (true) because "Afg" < "HamidAfg" lexicographically
    cout << "Is str2 == str3? : " << (str2 == str3) << endl; // 0 (false) as they are not equal

    return 0;
}
