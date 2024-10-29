// Vectors - Part 2: Iterators in STL C++
/*
Vector Iterators:
 - vec.begin()  --> Iterator to the first element
 - vec.end()    --> Iterator to the position *after* the last element (not the last element itself)
 - vec.rbegin() --> Reverse iterator starting from the last element
 - vec.rend()   --> Reverse iterator pointing to the position before the first element
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec = {1, 2, 3, 4, 5};

    // Accessing elements using begin() and end()
    cout << "First element using vec.begin(): " << *(vec.begin()) << endl;
    cout << "Beyond last element using vec.end(): " << *(vec.end()) << endl; // Note: Points to one position after the last element, so accessing directly may give garbage.

    // Accessing the actual last element by adjusting end() by -1
    cout << "Last element using (vec.end() - 1): " << *(vec.end() - 1) << endl;

    // Using Iterator: Directly accesses memory locations of vector elements, while the simple for loops can't access memory locations.
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Reverse Iterator: Traverses the vector from end to beginning
    vector<int>::reverse_iterator itr;
    for (itr = vec.rbegin(); itr != vec.rend(); itr++) {
        cout << *(itr) << " ";
    }
    cout << endl;

    // Simplified syntax: Using "auto" with iterators
    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
