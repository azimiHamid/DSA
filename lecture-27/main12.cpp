// Set: A collection of unique values in ascending order by default
// - Any duplicate values are ignored, so inserting the same value twice does not increase the set's size.
// - Sets are self-sorted, meaning they automatically arrange values in sorted order upon insertion.

#include <iostream>
#include <set>
using namespace std;

int main() {
    // Initializing a set of integers
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);  // Skipping 4 to show how lower_bound works when an element is missing

    // Attempt to insert duplicate values
    s.insert(1); // Duplicate, won't be added
    s.insert(2); // Duplicate, won't be added
    s.insert(3); // Duplicate, won't be added

    // Displaying the size of the set (duplicates do not count)
    cout << "Set size: " << s.size() << endl; // 4

    // lower_bound(x): Returns an iterator to the first element that is >= x
    // - If x exists in the set, it returns an iterator to x.
    // - If x does not exist, it returns an iterator to the next higher element or s.end() if no such element exists.
    // - If all elements are smaller, it returns s.end().
    auto lb = s.lower_bound(4); 
    if (lb != s.end()) {
        cout << "Lower bound of 4: " << *lb << endl; // 5 (next higher number to 4, since 4 is not in the set)
    } else {
        cout << "Lower bound of 4 not found\n";
    }

    // upper_bound(x): Returns an iterator to the first element that is > x
    // - If x exists in the set, it returns an iterator to the next higher element.
    // - If x does not exist, it still returns an iterator to the first element greater than x or s.end() if no such element exists.
    auto ub = s.upper_bound(3);
    if (ub != s.end()) {
        cout << "Upper bound of 3: " << *ub << endl; // 5 (next higher number after 3)
    } else {
        cout << "Upper bound of 3 not found\n";
    }

    // Displaying all elements in the set
    for (auto val : s) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
