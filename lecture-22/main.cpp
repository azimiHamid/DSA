// Painter's Partition Problem

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int maxAllowedTime = mid;
    int painters = 1, time = 0;

    for (int i = 0; i < n; i++) {
        if (time + arr[i] <= maxAllowedTime) {
            time += arr[i];
        } else { // give the remaining to the next painter (in this case 2nd painter)
            painters++;
            time = arr[i];
        }
    }

    return painters <= m ? true : false; // if painters don't exceed the given members so return true otherwise false.
}

int painterPartition(vector<int> &arr, int n, int m) {
    int sum = 0;
    for (int val : arr) {
        sum += val;
    }

    // Use vector iterators instead of pointer arithmetic
    int st = *max_element(arr.begin(), arr.end());
    int end = sum;
    int ans = -1;

    while (st <= end) {
        int mid = st + (end-st)/2;
        if(isPossible(arr, n, m, mid)) { // search left
            ans = mid;
            end = mid - 1;
        } else { // search right
            st = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = arr.size();
    int m = 2;

    cout << painterPartition(arr, n, m) << endl;

    return 0;
}
