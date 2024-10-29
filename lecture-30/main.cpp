#include <iostream>
using namespace std;


bool isFreqSame(int freq1[], int freq2[]) {
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }
    return true; 
}


bool checkInclusion(string s1, string s2) {
    if (s1.length() > s2.length()) return false;

    int freq1[26] = {0}, freq2[26] = {0};

    // Populate freq1 and initial window freq2
    for (int i = 0; i < s1.length(); i++) {
        freq1[s1[i] - 'a']++;
        freq2[s2[i] - 'a']++;
    }

    // Slide the window across s2
    for (int i = s1.length(); i < s2.length(); i++) {
        if (isFreqSame(freq1, freq2)) return true; // Check if current window matches s1's freq

        // Adjust window: remove character going out of the window, add new one coming in
        freq2[s2[i] - 'a']++;
        freq2[s2[i - s1.length()] - 'a']--;
    }

    // Final check for last window
    return isFreqSame(freq1, freq2);
}


int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    if (checkInclusion(s1, s2)) {
        cout << "Yes, a permutation of s1 is in s2." << endl;
    } else {
        cout << "No, there is no permutation of s1 in s2." << endl;
    }

    return 0;
}