// Linear Search Algorithm

#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) {
            return i; // FOUND
        }
    }

    return -1; // NOT FOUND
}

int main() {
    int arr[] = {3, 9, 4, 8, 19, 34, 21};
    int size = 7;
    int target = 21;

    cout << linearSearch(arr, size, target) <<endl;
    return 0;
}