// C++ STL Stack Tutorial
// The stack container follows the LIFO (Last In, First Out) principle.

#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Initializing a stack of integers
    stack<int> s;

    // Adding elements using push
    s.push(10);  // Adds 10 to the top
    s.push(20);  // Adds 20 on top of 10
    s.push(30);  // Adds 30 on top of 20

    // Displaying the top element (LIFO)
    cout << "Top element: " << s.top() << endl; // Should display 30

    // Removing the top element
    s.pop(); // Removes 30, so 20 is now on top
    cout << "Top element after pop: " << s.top() << endl; // Should display 20

    // Checking if the stack is empty
    if (s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    // Checking the size of the stack
    cout << "Stack size: " << s.size() << endl; // Should display the current size (2)

    // Additional stack: swap demonstration
    stack<int> s1;
    stack<int> s2;

    // Pushing elements onto the first stack
    s1.push(100); // Adds 100 to the top of s1
    s1.push(200); // Adds 200 on top of 100

    // Pushing elements onto the second stack
    s2.push(1); // Adds 1 to the top of s2
    s2.push(2); // Adds 2 on top of 1

    cout << "Top element of s1 before swap: " << s1.top() << endl; // Should display 200
    cout << "Top element of s2 before swap: " << s2.top() << endl; // Should display 2

    // Swapping the contents of s1 and s2
    s1.swap(s2);

    cout << "Top element of s1 after swap: " << s1.top() << endl; // Now displays 2
    cout << "Top element of s2 after swap: " << s2.top() << endl; // Now displays 200

    return 0;
}
