// Remove All Occurrences of a Substring - leetcode #1910

#include <iostream>
using namespace std;

string removeOccurrences(string s, string part) {

    while (s.length() > 0 && s.find(part) < s.length()) {

        s.erase(s.find(part), part.length());

    }

    return s;
}

int main() {
    string str = "daabcbaabcbc";
    string part = "abc";
    string res = removeOccurrences(str, part);

    cout << res << endl;

    return 0;
}