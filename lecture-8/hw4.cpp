// HomeWork:
// 4. Print the intersection of two arrays?

#include <iostream>
using namespace std;

void printIntersectionSimple(int arr1[], int n1, int arr2[], int n2) {

    cout << "\nIntersection of the two arrays(arr1 & arr2): ";

    for (int i = 0; i < n1; i++) {

        for (int j = 0; j < n2; j++) {

            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << ", ";
            }

        }

    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 5};
    int arr2[] = {4, 5, 6, 7, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printIntersectionSimple(arr1, n1, arr2, n2); // 4, 5, 5
    return 0;
}


// #include <iostream>
// using namespace std;

// void printIntersection(int arr1[], int sz1, int arr2[], int sz2) {

//     for (int i = 0; i < sz1; i++) {

//         for (int j = 0; j < sz2; j++) {

//             if (arr1[i] == arr2[j]) {
//                 // Check if arr1[i] was already printed
//                 bool alreadyPrinted = false;

//                 for (int k = 0; k < i; k++) {
//                     if (arr1[k] == arr1[i]) {
//                         alreadyPrinted = true;
//                         break;
//                     }
//                 }

//                 if (!alreadyPrinted) {
//                     cout << arr1[i] << " ";
//                 }

//             }
//         }
//     }
//     cout << "\n";
// }

// int main() {

//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {4, 5, 6, 7, 8};

//     int size1 = sizeof(arr1) / sizeof(arr1[0]);
//     int size2 = sizeof(arr2) / sizeof(arr2[0]);

//     printIntersection(arr1, size1, arr2, size2);
//     return 0;
// }



