// Binary Search Algorithm

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target) {
    int n = arr.size();
    int start = 0, end = n-1;

    while (start <= end) {
        int mid = start + (end - start)/2;
        if (target > arr[mid]) {
            start = mid + 1;
        } else if (target < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
            break;
        }
    }

    return -1;
}

int main() {

    int target = 3;
    vector<int> arr = {2, 5, 6, 8, 11, 12}; // even size array

    cout << binarySearch(arr, target) << endl;
    return 0;
}