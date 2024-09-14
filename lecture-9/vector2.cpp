#include <iostream>
#include <vector>
using namespace std;

int main() {

    std::vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << vec.size() << endl; // 5
    cout << vec.capacity() << endl; // 8

    return 0;
}