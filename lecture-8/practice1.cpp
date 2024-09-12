// Find the smallest & largest number in array ?

//? 1st method 
#include <iostream>
using namespace std;

int main() {
    
    int size = 6;
    int nums[size] = {23, 5, 24, 1, -15, 32};

    int smallest = INT_MAX; // INT_MAX = +infinity
    int largest = INT_MIN; // INT_MIN = -infinity

    for (int i = 0; i < size; i++) {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }

    cout << "Smallest num = " << smallest << endl;
    cout << "Largest num = " << largest << endl;

    return 0;
}



//? 2nd method
// #include <iostream>
// using namespace std;

// int main() {
    
//     int size = 6;
//     int nums[size] = {23, 5, 24, 1, -15, 32};

//     int smallest = INT_MAX; // INT_MAX = +infinity
//     for (int i = 0; i < size; i++) {
//         if (nums[i] < smallest) {
//             smallest = nums[i];
//         }
//     }
//     cout << "Smallest num = " << smallest << endl;


//     int largest = INT_MIN; // INT_MIN = -infinity
//     for (int i = 0; i < size; i++) {
//         if (nums[i] > largest) {
//             largest = nums[i];
//         }
//     }
//     cout << "Largest num = " << largest << endl;

//     return 0;
// }
