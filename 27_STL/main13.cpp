// multiset: A type of set that allows duplicate elements
// - Elements are automatically stored in sorted order, like a regular set.
// - Unlike a set, multiset can store multiple occurrences of the same value.

#include <iostream>
#include <set>
using namespace std;

int main() {

    // Initialize a multiset of integers
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);

    // Insert duplicate values to demonstrate multiset's ability to store duplicates
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);

    // Display all elements in the multiset, including duplicates
    cout << "Elements in multiset: ";
    for (int val : ms) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
