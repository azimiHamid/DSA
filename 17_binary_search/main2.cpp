// Binary Search Algorithm using RECURSION

#include <iostream>
#include <vector>
using namespace std;

int BS(int target, vector<int> arr, int start, int end) {

    if (start <= end) {

        int mid = start + ((end - start) >> 1);

        if (target > arr[mid]) {
            return BS(target, arr, mid+1, end);
        } 
        else if (target < arr[mid]) {
            return BS(target, arr, start, mid-1);
        } 
        else {
            return mid;
        }

    }

    return -1;
}

int main() {

    int target = 5;
    vector<int> arr = {-1, 0, 3, 5, 9, 12}; 
    int start = 0;
    int end = arr.size() - 1;

    int result = BS(target, arr, start, end);
    
    if (result == -1) {
        cout << "Target NOT FOUND!\n";
    } else {
        cout << "Target FOUND at index : " << result << endl;
    }

    return 0;
}