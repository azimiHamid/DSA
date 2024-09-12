// Find index of the smallest & largest number in array ?

#include <iostream>
using namespace std;

int main() {
    
    int size = 6;
    int nums[size] = {23, 5, 24, 1, -15, 32};

    int smallestIdx = 0;
    int largestIdx = 0;

    for (int i = 1; i < size; i++) {
        if (nums[i] < nums[smallestIdx]) {
            smallestIdx = i;
        }
        if (nums[i] > nums[largestIdx]) {
            largestIdx = i;
        }
    }

    cout << "Index of smallest num = " << smallestIdx << ": " << nums[smallestIdx] << endl;
    cout << "Index of largest num = " << largestIdx << ": " << nums[largestIdx] << endl;

    return 0;
}