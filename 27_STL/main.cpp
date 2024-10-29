// C++ STL Tutorial (Containers, Iterators, Algorithms, Functors)

/*
Containers : Vector
Vector (Dynamic & Resizable): A flexible container that can grow or shrink in size

Common operations covered:
 - size & capacity
 - push_back & pop_back
 - emplace_back
 - at() or []
 - front & back

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Different ways to initialize a vector
    vector<int> vec;                   // Empty vector
    vector<int> vec1(10, -1);          // Vector with 10 elements, each initialized to -1
    vector<int> vec2(vec1);            // Copy constructor - initialize vec2 with elements from vec1

    // Adding elements
    vec.push_back(1);                  // Adds 1 to the end of vec
    vec.push_back(2);                  // Adds 2 to the end of vec
    vec.emplace_back(3);               // Similar to push_back, but may be faster in some cases

    // Removing elements
    vec.pop_back();                    // Removes the last element

    cout << "Size: " << vec.size() << endl;           // Size of the vector (number of elements)
    cout << "Capacity: " << vec.capacity() << endl;   // Current capacity (total space available in memory)
                                                     // Capacity doubles when exceeded

    // Accessing elements
    cout << "Value at index 0: " << vec[0] << " and at index 1: " << vec.at(1) << endl;

    // Accessing front and back elements
    cout << "First element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;

    // ---------------- Costly Operations - Time Complexity: O(n) ----------------
    
    // Removing elements with erase (shifts all elements after the removed element)
    vec1.erase(vec1.begin());                          // Erase the first element
    vec1.erase(vec1.begin() + 2);                      // Erase element at index 2
    vec1.erase(vec1.begin() + 1, vec1.begin() + 3);    // Erase elements from index 1 up to (but not including) index 3

    // Inserting elements
    vec1.insert(vec1.begin() + 2, 100);                // Insert 100 at index 2
    cout << "Element at index 2: " << vec1[2] << endl;

    // Clearing a vector
    cout << "Size of vec2 before clearing: " << vec2.size() << endl;   // 10
    vec2.clear();                                    // Remove all elements from vec2
    cout << "Size of vec2 after clearing: " << vec2.size() << endl;    // 0

    // Checking if a vector is empty
    cout << "Is vec2 empty? " << vec2.empty() << endl;    // 1 (true)
    cout << "Is vec1 empty? " << vec1.empty() << endl;    // 0 (false)

    return 0;
}
