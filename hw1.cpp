// Find index of the smallest & largest number in array ?

#include <iostream>
using namespace std;

int main() {
    
    int size = 6;
    int nums[size] = {23, 5, 24, 1, -15, 32};

    int smallest = INT_MAX; // INT_MAX = +infinity
    int largest = INT_MIN; // INT_MIN = -infinity
    int smallestIdx = 0;
    int largestIdx = 0;

    for (int i = 0; i < size; i++) {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
        if (nums[i] == smallest) {
            smallestIdx = i;
        }
        if (nums[i] == largest) {
            largestIdx = i;
        }
    }

    cout << "index of smallest num = " << smallestIdx << ": " << smallest << endl;
    cout << "index of largest num = " << largestIdx << ": " << largest << endl;

    return 0;
}