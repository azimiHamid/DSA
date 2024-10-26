// Containers: Deque - Part of the C++ STL
/*
std::deque - A double-ended queue container:
 - push_back():     Add element at the end
 - push_front():    Add element at the beginning
 - emplace_back():  Construct and add element at the end (more efficient for complex types)
 - emplace_front(): Construct and add element at the beginning (more efficient for complex types)
 - pop_back():      Remove last element
 - pop_front():     Remove first element

Other Useful Methods:
 - Similar to vectors and lists, deques also have methods like size(), begin(), end(), rbegin(), rend(), front(), back(), insert(), erase(), clear(), empty(), etc.
 - Access elements directly using operator[] or at() for bounds-checked access.
*/

#include <iostream>
#include <deque>
using namespace std;

int main() {

    // Initializing deques in different ways:
    deque<int> dq;               // Empty deque
    deque<int> dq1 = {1, 2, 3, 4, 5}; // Deque initialized with values

    // Adding elements to the deque
    dq.push_back(10);       // Adds 10 at the end
    dq.push_back(20);       // Adds 20 at the end
    
    dq.emplace_back(30);    // Adds 30 at the end (more efficient for complex types)

    dq.push_front(40);      // Adds 40 at the beginning
    dq.push_front(50);      // Adds 50 at the beginning
    
    dq.emplace_front(60);   // Adds 60 at the beginning (more efficient for complex types)

    // Removing elements from the deque
    dq.pop_back();          // Removes the last element
    dq.pop_front();         // Removes the first element

    // Accessing elements in the deque
    cout << "First element: " << dq.front() << endl;    // Accesses the first element
    cout << "Last element: " << dq.back() << endl;      // Accesses the last element

    // Accessing elements directly by index
    cout << "Element at index 0: " << dq[0] << endl;    // Direct access without bounds checking
    cout << "Element at index 1 (bounds-checked): " << dq.at(1) << endl; // Access with bounds checking

    // Iterating and displaying deque elements
    cout << "Deque elements: ";
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;

    // Displaying deque size
    cout << "Size of deque: " << dq.size() << endl;     // Returns number of elements

    // Clearing all elements from deque
    dq.clear(); 
    cout << "Size after clearing: " << dq.size() << endl; // Should be 0 after clear()

    // Checking if the deque is empty
    cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << endl;

    return 0;
}
