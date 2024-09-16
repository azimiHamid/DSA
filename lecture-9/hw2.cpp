// Linear search on a vector?

#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {

    vector<int> nums = {10, 20, 30, 40, 50};
    int target = 30;
    
    int res = linearSearch(nums, target);

    if (res != -1) {
        cout << "Number found at index: " << res << endl;
    } else {
        cout << "Number not found\n";
    }
    
    return 0;
}
