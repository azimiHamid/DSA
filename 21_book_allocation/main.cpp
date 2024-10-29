// Book Allocation problem - leetcode 

#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int mid) {
    int maxAllowedPages = mid;
    int students=1, pages=0;

    for (int currPages : arr) {
        if (currPages > maxAllowedPages) return false;

        if (pages + currPages <= maxAllowedPages) { pages += currPages; }
        else { students++;  pages = currPages; }
    }

    return students > m ? false : true; // if more than the given students needed so it's not valid and returns false.
}


int allocateBooks(vector<int> &arr, int n, int m) {

    if (m > n) return -1;

    int sum = 0;
    for (int val : arr) {
        sum += val;
    }
    
    int st=0, end=sum;
    int ans = -1;
    while (st <= end) {
        int mid = st + (end-st)/2;
        if (isValid(arr, n, m, mid)) { // search left
            ans = mid;
            end = mid - 1;
        } else { // search right
            st = mid + 1;
        }
    }

    return ans;
}

int main() {

    // vector<int> arr = {2, 1, 3, 4}; // 6
    vector<int> arr = {15, 17, 20};  // 32
    int n = arr.size(); // nums of books
    int m = 2; // nums of students

    cout << allocateBooks(arr, n, m) << endl; 

    return 0;
}