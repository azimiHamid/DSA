// Other Algorithms : swap

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int a = 10;
    int b = 90;

    cout << "Before swaping a = " << a << " and b = " << b << endl;

    swap(a, b);
    cout << "After swaping a = " << a << " and b = " << b << endl;

    return 0;
}