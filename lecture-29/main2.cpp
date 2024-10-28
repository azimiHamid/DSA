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
    string str1 = "daabcbaabcbc";
    string part1 = "abc";
    string res1 = removeOccurrences(str1, part1); // "dab"

    string str2 = "HelloHello";
    string part2 = "Hello";
    string res2 = removeOccurrences(str1, part1);

    cout << res2 << endl; // empty string

    return 0;
}