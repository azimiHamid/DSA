// Majority element (Optimal)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();

    sort(nums.begin(), nums.end());

    int freq = 1, ans = nums[0];

    for (int i = 1; i < n; i++) {

        if (nums[i] == nums[i-1]) {
            freq++;
            
        } else {
            freq = 1;
            ans = nums[i];
        }

        if (freq > n/2) {
            return ans;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {3, 3, 4, 2, 3};

    int res = majorityElement(nums);

    if (res > 0) {
        cout << "Majority Element: " << res << endl;
    } else {
        cout << "No Majority Element FOUND!\n";
    }

    return 0;
}