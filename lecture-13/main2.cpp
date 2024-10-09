// Stock Buy and Sell
// prices = [7, 1, 5, 3, 6, 4], return max profit 

#include <iostream>
#include <vector>
using namespace std;

// My Approach
int maxProfit(vector<int>& prices) {

    int maxProfit = 0;
    int minPrice = INT_MAX;

    for (int i = 0; i < prices.size(); i++) {

        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int currentProfit = prices[i] - minPrice;

        if (currentProfit > maxProfit) {
            maxProfit = currentProfit;
        }
    }

    return maxProfit;
}


// Teacher approach
// int maxProfit(vector<int>& prices) {

//     int maxProfit = 0;
//     int bestBuy = prices[0];

//     for (int i = 1; i < prices.size(); i++) {

//         if (prices[i] > bestBuy) {
//             maxProfit = max(maxProfit, prices[i] - bestBuy);
//         }

//         bestBuy = min(bestBuy, prices[i]);
//     }

//     return maxProfit;
// }

int main() {

    vector<int> prices = { 7, 1, 5, 3, 6, 4 };
    cout << maxProfit(prices) << endl;

    return 0;
}
