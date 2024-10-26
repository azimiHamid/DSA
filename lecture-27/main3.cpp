// Containers: List - Part of the C++ STL
/*
list - A doubly-linked list container:
 - push_back():    Add element at the end
 - push_front():   Add element at the beginning
 - emplace_back(): Construct and add element at the end (slightly more efficient than push_back for complex data types)
 - emplace_front(): Construct and add element at the beginning (slightly more efficient than push_front)
 - pop_back():     Remove last element
 - pop_front():    Remove first element

Other Methods Available:
 - Similar to vectors, lists also have methods like size(), begin(), end(), rbegin(), rend(), front(), back(), erase(), insert(), clear()
*/

#include <iostream>
#include <list>
using namespace std;

int main() {

    // Initializing lists in different ways:
    list<int> l;             // Empty list
    list<int> l1 = {1, 2, 3, 4, 5}; // List initialized with values

    // Adding elements to the list
    l.push_back(1);       // Adds 1 at the end of the list
    l.push_back(2);       // Adds 2 at the end of the list
    
    l.emplace_back(3);    // Adds 3 at the end of the list (efficient for complex types)

    l.push_front(4);      // Adds 4 at the beginning
    l.push_front(5);      // Adds 5 at the beginning
    
    l.emplace_front(3);   // Adds 3 at the beginning (efficient for complex types)

    // Removing elements from the list
    l.pop_back();         // Removes the last element
    l.pop_front();        // Removes the first element

    // Iterating and displaying list elements
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
