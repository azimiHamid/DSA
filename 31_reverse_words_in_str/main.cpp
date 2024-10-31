// Reverse Words in String | leetcode 151

#include <iostream>
#include <algorithm>
using namespace std;

string reverseWords(string str) {
    int n = str.length();
    string ans = "";

    reverse(str.begin(), str.end());

    for (int i = 0; i < n; i++) {
        string word = "";
        while (i < n && str[i] != ' ') {
            word += str[i];
            i++;
        }

        reverse(word.begin(), word.end());
        if (!word.empty()) {
            ans += " " + word;
        }
    }

    return ans.substr(1);
}

int main() {

    string s = "Blue is Sky The";
    string result = reverseWords(s);
    cout << result << endl; // The Sky is Blue

    return 0;
}