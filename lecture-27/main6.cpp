// C++ STL Stack Tutorial
// The stack container follows the LIFO (Last In, First Out) principle.

#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Initializing a stack of integers
    stack<int> s;
    stack<int> s1;

    // Pushing elements onto the stack
    s.push(10);  // Adds 10 to the top of the stack
    s.push(20);  // Adds 20 on top of 10
    s.push(30);  // Adds 30 on top of 20

    // LIFO (Last In, First Out) behavior
    // Elements are removed from the top in the reverse order of insertion

    cout << "Top element: " << s.top() << endl;  // Accesses the top element (30)

    // Popping the top element
    s.pop();  // Removes 30 from the top
    cout << "Top element after pop: " << s.top() << endl;  // Now the top is 20

    // Checking the size of the stack
    cout << "Size of stack: " << s.size() << endl;

    // Checking if the stack is empty
    if (s.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    // Example of popping all elements to clear the stack
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    s1.swap(s);
    cout << "Size of stack1: " << s1.size() << endl;

    return 0;
}
