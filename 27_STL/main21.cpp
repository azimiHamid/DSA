// Other Algorithms : min_element and max_element in a vector

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    vector<int> vec = {1, 2, 3, 4, 5};

    cout << "Max_element in vec is = " << *(max_element(vec.begin(), vec.end())) << endl;
    cout << "Min_element in vec is = " << *(min_element(vec.begin(), vec.end())) << endl;

    cout << "Vec = ";
    for (auto val : vec) {
        cout << val << " ";
    }
    cout << endl;

    
    return 0;
}