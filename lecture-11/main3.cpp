// Pair Sum Algorithm :: two-pointer technique - better than brute force
// two-pointer technique just work for arrays which are already sorted.
// for Ex: it won't work for unsorted array like vector<int> nums = {3, 2, 4}
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int>& nums, int target) {
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n-1;
    while (i < j) {

        int pairSum = nums[i] + nums[j];

        if (pairSum > target) {
            j--;
        } else if (pairSum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }
    
    return ans;
}

int main() {
    vector<int> nums = {3, 2, 4};
    int target = 6;

    vector<int> result = pairSum(nums, target);

    if (!result.empty()) {
        cout << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
}