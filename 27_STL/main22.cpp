// Other Algorithms : Binary Search 
// --> binary_search(vec.begin(), vec.end(), target) 
//     returns true(1) or false(0)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    vector<int> vec = {1, 2, 3, 4, 5};

    cout << binary_search(vec.begin(), vec.end(), 4) << endl; // 1
    cout << binary_search(vec.begin(), vec.end(), 10) << endl; // 0
    
    cout << "Vec = ";
    for (auto val : vec) {
        cout << val << " ";
    }
    cout << endl;

    
    return 0;
}