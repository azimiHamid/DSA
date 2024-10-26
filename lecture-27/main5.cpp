// Utility: Pair - Part of the C++ STL
/*
std::pair - A container to store two heterogeneous values as a single unit:
 - Useful when you want to return two values from a function or store key-value pairs.
 - pair.first: Access the first element of the pair.
 - pair.second: Access the second element of the pair.

Commonly Used Pair Functions:
 - make_pair(): Construct a pair without specifying types explicitly.
 - tie(): Unpack values from a pair (or tuple).
 - swap(): Swap values between two pairs.
*/

#include <iostream>
#include <utility>  // Include for std::pair
#include <vector>   // Include for std::vector
using namespace std;

int main() {

    // Initializing a pair
    pair<int, string> p1;           // Empty pair with default values (0, "")
    pair<int, string> p2(1, "Apple"); // Pair with values (1, "Apple")

    // Accessing pair elements
    cout << "First element of p2: " << p2.first << endl;    // Access the first element
    cout << "Second element of p2: " << p2.second << endl;  // Access the second element

    // Modifying elements of a pair
    p2.first = 2;
    p2.second = "Orange";
    cout << "Modified pair: (" << p2.first << ", " << p2.second << ")" << endl;

    // Creating a pair using make_pair
    pair<string, double> p3 = make_pair("Banana", 1.75);
    cout << "Pair created with make_pair: (" << p3.first << ", " << p3.second << ")" << endl;

    // Swapping pairs
    pair<int, string> p4 = make_pair(3, "Grapes");
    cout << "Before swap: p2 = (" << p2.first << ", " << p2.second << "), p4 = (" << p4.first << ", " << p4.second << ")" << endl;
    p2.swap(p4); // Swaps contents of p2 and p4
    cout << "After swap: p2 = (" << p2.first << ", " << p2.second << "), p4 = (" << p4.first << ", " << p4.second << ")" << endl;

    // Unpacking pair values using tie
    int number;
    string fruit;
    tie(number, fruit) = p4;
    cout << "Unpacked values from p4: number = " << number << ", fruit = " << fruit << endl;

    // Comparing pairs (lexicographical comparison = string values compared according to thier ASCII code like here 'Grapes' > 'Apples' because G=71 and A=65 in ASCII code) 
    pair<int, string> p5(2, "Apple");
    if (p4 > p5) {
        cout << "p4 is greater than p5" << endl;
    } else {
        cout << "p4 is not greater than p5" << endl;
    }

    // Using a pair inside another pair
    pair<int, pair<string, double>> p6 = make_pair(10, make_pair("Cherry", 2.5));
    cout << "Nested pair p6: (" << p6.first << ", (" << p6.second.first << ", " << p6.second.second << "))" << endl;

    // Iterating over a pair with a for loop
    vector<pair<int, string>> fruitList = { {1, "Apple"}, {2, "Banana"}, {3, "Cherry"} };
    cout << "Fruit list:" << endl;
    for (const auto& item : fruitList) {
        cout << "Number: " << item.first << ", Fruit: " << item.second << endl;
    }

    // Vector of pairs - useful when storing multiple related values in one structure
    vector<pair<int, string>> products;
    products.push_back(make_pair(101, "Laptop"));
    products.push_back(make_pair(102, "Smartphone"));
    products.push_back(make_pair(103, "Tablet"));

    cout << "\nProduct list:" << endl;
    for (const auto& product : products) {
        cout << "ID: " << product.first << ", Product: " << product.second << endl;
    }

    return 0;
}
