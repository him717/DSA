class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ltn = INT_MAX;
        int total = 0;
        int current = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < ltn){
                ltn = prices[i];
            }
            current = prices[i] - ltn;
            if(total < current){
                total = current;
            }
        }
        return total;
    }
};
