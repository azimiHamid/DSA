// Other Algorithms : Next Permutation

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "abc";

    next_permutation(s.begin(), s.end());
    cout << "Next permutation of 'abc' is = " << s << endl;

    prev_permutation(s.begin(), s.end());
    cout << "Previous permutation = " << s << endl;

    return 0;
}