// C++ STL Queue Tutorial
// The queue container follows the FIFO (First In, First Out) principle.

#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Initializing a queue of integers
    queue<int> q;

    // Adding elements to the queue using push
    q.push(10);  // Adds 10 to the back of the queue
    q.push(20);  // Adds 20 to the back, behind 10
    q.push(30);  // Adds 30 to the back, behind 20

    // Accessing the front and back elements
    cout << "Front element: " << q.front() << endl; // Should display 10
    cout << "Back element: " << q.back() << endl;   // Should display 30

    // Removing the front element (FIFO)
    q.pop(); // Removes 10, so 20 is now at the front
    cout << "Front element after pop: " << q.front() << endl; // Should display 20

    // Printing the queue elements
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // Checking the size of the queue
    cout << "Queue size: " << q.size() << endl; // Should display the current size (2)

    // Additional queue for swap demonstration
    queue<int> q1;
    queue<int> q2;

    // Adding elements to the first queue
    q1.push(100);
    q1.push(200);

    // Adding elements to the second queue
    q2.push(1);
    q2.push(2);

    cout << "Front of q1 before swap: " << q1.front() << endl; // Should display 100
    cout << "Front of q2 before swap: " << q2.front() << endl; // Should display 1

    // Swapping the contents of q1 and q2
    q1.swap(q2);

    cout << "Front of q1 after swap: " << q1.front() << endl; // Now displays 1
    cout << "Front of q2 after swap: " << q2.front() << endl; // Now displays 100

    return 0;
}
