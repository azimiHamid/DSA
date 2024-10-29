// Kadane's Algorithm
// Kadane's Algorithm is a well-known algorithm used to find the maximum sum of a contiguous subarray in an array of integers, often solving problems involving negative numbers efficiently. It works by iterating through the array, keeping track of the current sum and updating the maximum sum whenever a higher sum is found.

#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {

    int currSum = 0, maxSum = INT_MIN; // Initialize current and max sums.

    for (int val : nums) { 
        currSum += val; // Add current value to the running sum.
        maxSum = max(currSum, maxSum); // Update the max sum if needed.
        
        if (currSum < 0) currSum = 0; // Reset currSum if it goes below zero.
    }

    return maxSum; // Return the max sum found.
}

int main() {

    vector<int> nums = {-2, 1, 3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum sub array sum = " << maxSubArray(nums); // Maximum sub array sum = 10

    return 0;
}