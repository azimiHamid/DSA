// Algoritms : sort() - part 2
// Demonstration of Custom Sorting Using sort() and a Comparator Function

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Custom comparator for sorting pairs
// Sort primarily by the second element in ascending order
// If second elements are equal, sort by the first element in ascending order
bool comparator(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    // If second elements are equal, compare the first elements
    return p1.first < p2.first;
}

int main() {
    // Initialize vector of pairs
    vector<pair<int, int>> vec = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};

    // Sort vector using the custom comparator function
    sort(vec.begin(), vec.end(), comparator);

    // Output sorted vector of pairs
    cout << "Sorted vector of pairs:" << endl;
    for (auto val : vec) {
        cout << val.first << " " << val.second << endl;
    }

    return 0;
}
