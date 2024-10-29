// Product of Array except self

#include <iostream>
#include <vector>
using namespace std;

// BRUTE-FORCE APPROACH
// vector<int> productExceptSelf(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> ans(n, 1);

//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             if (i != j) {
//                 ans[i] *= nums[j];
//             }
//         }
//     }

//     return ans;
// }



// OPTIMAL APPROACH
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n, 1);  // Initialize the answer array with 1 -> [1,1,1,1]

    // Step 1: Left pass
    int left_prod = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = left_prod;
        left_prod *= nums[i];
    }

    // Step 2: Right pass
    int right_prod = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= right_prod;
        right_prod *= nums[i];
    }

    return answer;
}

int main() {

    vector<int> nums = {1, 2, 3, 4};
    vector<int> res = productExceptSelf(nums);
    
    for (int val: res) {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}