// Pair Sum Algorithm :: Brute Force Approach

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int>& vec, int target) {
    vector<int> res;

    for (int i = 0; i < vec.size(); i++) {
        for (int j = i+1; j < vec.size(); j++) {
            if (vec[i] + vec[j] == target) {
                res.push_back(i); 
                res.push_back(j); 
            }
        }
    }

    return res;
}

int main() {

    vector<int> vec = {3,2,4};
    int target = 6;

    vector<int> result = pairSum(vec, target);

    cout << result[0] << ", " << result[1] << endl;

    return 0;
}