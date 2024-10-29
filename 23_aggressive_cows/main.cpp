// Aggressive Cows Problem

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int mid) {
    
    int cows = 1, lastStallPosition = arr[0];

    for (int i = 1; i < n; i++) {

        if (arr[i] - lastStallPosition >= mid) {
            cows++;
            lastStallPosition = arr[i];
        }
        if (cows == m) return true;

    }

    return false;
}

int agressiveCows(vector<int> arr, int m) {
    
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int st = 1, end = arr[n-1] - arr[0], ans = -1;

    while (st <= end) {
        int mid = st + (end-st)/2;
        if (isPossible(arr, n, m, mid)) { // search right
            ans = mid;
            st = mid + 1;
        } else { // search left
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 8, 4, 9};
    int m = 3; // nums of cows
    cout << "Largest minimum distance between each cow: " << agressiveCows(arr, m) << endl;
    return 0;
}