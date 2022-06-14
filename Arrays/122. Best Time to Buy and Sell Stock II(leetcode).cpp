/*You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time.
However, you can buy it then immediately sell it on the same day.

Find and return the maximum profit you can achieve.*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int profit = 0;
        for(int i =0;i<prices.size();i++){
            minprice = min(minprice,prices[i]);
            if((prices[i]-minprice)>0){
                profit += prices[i]-minprice;
                minprice = prices[i];
            }
        }
        return profit;
        
    }
};
