// Find index of the smallest & largest number in array ?

#include <iostream>
using namespace std;

int main() {
    
    int size = 6;
    int nums[size] = {23, 5, 24, 1, -15, 32};

    int smallestIdx = 0;
    int largestIdx = 0;

    // The loop starts from i = 1 
    // as the initial values at i = 0 are already considered in nums[smallestIdx].
    for (int i = 1; i < size; i++) {
        if (nums[i] < nums[smallestIdx]) {
            smallestIdx = i;
        }
        if (nums[i] > nums[largestIdx]) {
            largestIdx = i;
        }
    }

    cout << "Index of smallest num = " << smallestIdx << ": " << nums[smallestIdx] << endl; // 4: -15
    cout << "Index of largest num = " << largestIdx << ": " << nums[largestIdx] << endl; // 5: 32

    return 0;
}