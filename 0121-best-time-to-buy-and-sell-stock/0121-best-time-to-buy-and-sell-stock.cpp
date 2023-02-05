class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lt = 0, rt = 1;
        int minSoFar = prices[0], maxProfit = 0;
    
        while(rt<prices.size()){
            if(prices[lt]<minSoFar){
                minSoFar = prices[lt];
            }
            maxProfit = max(maxProfit, prices[rt]-minSoFar);
            lt++;
            rt++;
        }
        return maxProfit;
    }
};