// Other Algoritms : reverse()
// reverse() - Demonstrates the use of reverse() in STL

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    // Initialize a vector of integers
    vector<int> vec = {1, 2, 3, 4, 5};

    // Display original vector
    cout << "Original vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;   


    // Apply reverse() to reverse the entire vector
    reverse(vec.begin(), vec.end());
    cout << "Entire vector reversed: ";
    for (auto val : vec) {
        cout << val << " ";
    }
    cout << endl;


    // Reverse a specific part of the vector from the second element to one element before the end
    reverse(vec.begin() + 1, vec.begin() + 4); // Reverses elements from index 1 to index 4 (idx 4 itself is excluded)
    cout << "Partially reversed (from index 1 to index 4): ";
    for (auto val : vec) {
        cout << val << " ";
    }
    cout << endl;


    return 0;
}
