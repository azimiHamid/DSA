// Peak Index in Mountain Array | Binary Search | Leetcode 852

#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& nums) {
    int start = 0, end = nums.size() - 1;

    // Since we're guaranteed to have a mountain array, there's always a peak.
    // we will not check for the peak at the very end or the very beginning explicitly, because we trust the array structure to provide a peak that is somewhere between these two points. That's why no need to check : (start <= end)
    while (start < end) {
        int mid = start + (end - start) / 2;

        // Check if mid is the peak element by comparing it with its neighbors.
        if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;

        // If the element to the right of mid is greater, we're on the left slope,
        // and the peak is somewhere to the right.
        if (nums[mid] < nums[mid+1]) start = mid + 1;  // Narrow the search range to the right half.

        // Otherwise, the peak is on the left slope.
        // Move the search range to the left.
        else end = mid;
        
    }

    // return -1;           OR: 👇
    // At the end of the loop, start will point to the peak index.
    return start;
}

int main() {

    vector<int> arr = {0, 3, 8, 9, 5, 2};
    int result = peakIndexInMountainArray(arr);

    cout << "The peak FOUND in index : " << result << endl;

    return 0;
}