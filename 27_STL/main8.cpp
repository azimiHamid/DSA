// C++ STL Priority Queue Tutorial
// priority_queue is a container adapter that provides constant-time access to the largest element (by default).
// Operates like a max-heap by default.

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // Initializing a max-heap priority queue
    priority_queue<int> maxHeap;

    // Adding elements using push
    maxHeap.push(30);
    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(5);

    // Accessing the top element (the largest element in a max-heap)
    cout << "Top element (max): " << maxHeap.top() << endl; // 30

    // Removing the top element
    maxHeap.pop(); // Removes the top (30), next largest (20) becomes the top
    cout << "Top element after pop: " << maxHeap.top() << endl; // 20

    // Checking the size of the priority queue
    cout << "Size of maxHeap: " << maxHeap.size() << endl; // current size (3)

    // Printing the priority queue elements
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;

    // Using priority_queue as a min-heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Adding elements to the min-heap
    minHeap.push(30);
    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(5);

    cout << "Top element (min): " << minHeap.top() << endl; // Should display 5

    // Removing the top element (smallest in a min-heap)
    minHeap.pop(); // Removes 5, next smallest (10) becomes the top
    cout << "Top element after pop in minHeap: " << minHeap.top() << endl; // Should display 10

    // Using priority_queue with pairs (for custom objects)
    priority_queue<pair<int, string>> maxHeapPair;

    maxHeapPair.push({1, "Apple"});
    maxHeapPair.push({3, "Banana"});
    maxHeapPair.push({2, "Cherry"});

    // Accessing top element (pair with largest first value)
    cout << "Top element in pair maxHeap: " << maxHeapPair.top().second << " with priority " << maxHeapPair.top().first << endl;

    return 0;
}
