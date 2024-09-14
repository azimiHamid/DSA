// Find the Unique Value ? LeetCode Problem
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums) {
    int uniqueVal = 0;

    for (int num: nums) {
        uniqueVal = uniqueVal ^ num; 
    }
    return uniqueVal;
}

int main() {

    vector<int> nums = {4, 1, 2, 1, 2};
    
    cout << "Unique value: " << singleNumber(nums) << endl; // Unique value: 4

    return 0;
}
