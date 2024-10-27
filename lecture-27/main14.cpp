// unordered_set: Stores unique elements in an unordered (random) arrangement
// - Average Time Complexity for insert, find, and erase operations: O(1); worst case O(n)
// - Unlike ordered sets, there is no `upper_bound` or `lower_bound` function in `unordered_set`
// - Useful when order of elements is not important, and you only need fast access

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    // Initialize an unordered set of integers
    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(5);

    // Insert duplicate values to show that duplicates are ignored
    us.insert(1);
    us.insert(2);
    us.insert(3);

    // Display elements (order will vary with each run)
    cout << "Elements in unordered set: ";
    for (int val : us) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}