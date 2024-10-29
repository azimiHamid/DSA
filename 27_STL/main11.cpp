// Unordered Map vs. Map: Understanding the Differences in Time Complexity and Ordering

// - Maps are sorted associative containers, while unordered_maps store data in no particular order.
// - Time Complexity:
//      - map: O(log n) for insertions, deletions, and lookups (uses a balanced binary tree structure)
//      - unordered_map: O(1) average time complexity for insertions, deletions, and lookups
//          - However, in the worst case, time complexity can go up to O(n), depending on hash collisions
// - unordered_map Methods:
//      - unordered_map supports almost the same methods as map and multimap but does not maintain order.
//      - unordered_map stores elements in random order, while map stores them in a sorted order by key.

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Creating an unordered_map with keys as strings and values as integers
    unordered_map<string, int> m;

    // Inserting key-value pairs using emplace (more efficient than insert in some cases)
    m.emplace("tv", 100);
    m.emplace("watch", 10);
    m.emplace("computer", 34);
    m.emplace("headphone", 45);

    // Iterating through unordered_map
    // Since unordered_map has no specific order, the output order will be random.
    for (auto p : m) {
        cout << p.first << " " << p.second << endl; // Outputs each key-value pair
    }

    return 0;
}
