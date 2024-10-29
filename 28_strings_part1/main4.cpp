// Strings - Reverse a string

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string str = "Hamid";
    int end = str.length() - 1;
    int st = 0;

    // Swap characters from start to end moving towards the middle (Two-pointer Approach)
    // while (st <= end) {
    //     swap(str[st], str[end]); // Swap characters at indices `st` and `end`
    //     st++; // Move start pointer forward
    //     end--; // Move end pointer backward
    // }


    // Or simply, I can use reverse function
    reverse(str.begin(), str.end());


    // Swap characters from the beginning and end, moving towards the center
    // for (int i = 0; i < n / 2; i++) {
    //     swap(str[i], str[n - 1 - i]);  
    // // Explanation of n - 1 - i:
    //     // - `n - 1` gives the index of the last character in the string.
    //     // - `n - 1 - i` means that as `i` increments from the start,
    //     //   this expression finds the corresponding character from the end to swap with `str[i]`.
    //     //   For example:
    //     //   - When `i = 0`, `n - 1 - i` is the last index, so `str[0]` swaps with `str[n-1]`.
    //     //   - When `i = 1`, `str[1]` swaps with `str[n-2]`.
    //     // - This continues until reaching the center, effectively reversing the string.
    // // Explanation:
    //     // str[i] swaps with str[n - i - 1], so str[0] swaps with str[4] (last character)
    //     // This continues until the middle of the string is reached
    // }

    cout << "Reversed string: " << str << endl; // Output the reversed string


    return 0;
}
