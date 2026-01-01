#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int maxProfit = 0;
    int bestBuy = prices[0];

    for(int i = 1; i < prices.size(); i++) {
        maxProfit = max(maxProfit, prices[i] - bestBuy);
        bestBuy = min(bestBuy, prices[i]);
    }

    cout << maxProfit;
    return 0;
}
