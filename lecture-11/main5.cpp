// Majority Element (Moore's Algorithm)

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {

    int n = nums.size();
    int freq = 0, ans = 0;

    for (int i = 1; i < n; i++) {

        if (freq == 0) {
            ans = nums[i];
        } 
        
        if (ans == nums[i]) {
            freq++;
        }else {
            freq--;
        }
    }

    int count = 0;
    for (int val : nums) {
        if (val == ans) {
            count++;
        }
    }

    if (count > nums.size()/2) { return ans; }
    else { return -1; }

    return ans;
}

int main() {
    vector<int> nums = {3, 3, 4, 2};

    int res = majorityElement(nums);

    if (res > 0) {
        cout << "Majority Element: " << res << endl;
    } else {
        cout << "No Majority Element FOUND!\n";
    }

    return 0;
}