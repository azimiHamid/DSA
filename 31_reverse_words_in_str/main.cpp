// Reverse Words in String | leetcode 151

#include <iostream>
#include <algorithm>
using namespace std;

string reverseWords(string s)
{
    int n = s.length();
    string ans = "";

    reverse(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
        string word = "";
        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());
        if (!word.empty()) {
            ans += " " + word;
        }
    }

    return ans.substr(1); 
}


int main()
{
    string s = "The sky is blue";
    string str = reverseWords(s);
    
    cout << str << endl;
    return 0;
}