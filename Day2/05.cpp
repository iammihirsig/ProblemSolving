// Problem name: Best Time To Buy & Sell Stock (https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

// =============== Optimized solution ===============
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // using 2 pointer approach to track for each day

        // initially the min price and max price till day 1 is the first value
        int maxProfit = 0, minPriceTillNow = prices[0];

        for (int i = 0; i < prices.size(); i++) {
            // current price for the day
            int currentPrice = prices[i];

            // calculate current min price
            if (minPriceTillNow > currentPrice) {
                minPriceTillNow = currentPrice;
            }

            // calculate maxProfit
            maxProfit = max(maxProfit, currentPrice - minPriceTillNow);
        }

        return maxProfit;
    }
};
*/
// TC: O(n)
// SC: O(1)
