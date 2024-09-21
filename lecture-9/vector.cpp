// Vector & Array: Both store elements of the same type, but vectors are dynamic, meaning they can change size during runtime.
#include <iostream>
#include <vector> // Standard Template Library (STL) for vectors
using namespace std;

int main() {

    vector<char> vec2 = {'a', 'B', 'c', 'd', 'e'}; // Vector elements are initialized with custom values.
    vector<int> vec1(3); // Vector declared with an initial size of 3. Elements are initialized with default values (0 for int).
    vector<int> vec; // Vector declared without an initial size. Elements will be added dynamically.

    vec.push_back(0); // Adds the value 0 to the vector (dynamic resizing).
    vec.push_back(1); // Adds the value 1 to the vector (dynamic resizing).

    //! vec[2] = 2; // Error: You cannot access index 2 directly because it doesn't exist yet.
    //! vec[3] = 3; // Error: Same reason as above. The vector size must be expanded first.

    //* Correct way:
    vec.push_back(2); // Adds the value 2 to the vector (dynamic resizing).
    vec.push_back(3); // Adds the value 3 to the vector (dynamic resizing).

    // Printing all elements in the vector
    cout << vec[0] << endl; // Prints the first element (0).
    cout << vec[1] << endl; // Prints the second element (1).
    cout << vec[2] << endl; // Prints the third element (2).
    cout << vec[3] << endl; // Prints the fourth element (3).

    return 0;
}
