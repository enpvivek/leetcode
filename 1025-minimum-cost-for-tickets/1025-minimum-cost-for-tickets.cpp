class Solution {
public:
    int minCost(vector<int>&days, int d, vector<int>&costs, vector<int>&dp){
        if (d >= days.size()) {
            return 0;
        }
        if(dp[d]!=-1) return dp[d];

        // Option 1: Buy a 1-day ticket
        int cost1 = costs[0] + minCost(days, d + 1, costs,dp);

        // Option 2: Buy a 7-day ticket
        int i = d;
        while (i < days.size() && days[i] - days[d] < 7) {
            i++;
        }
        int cost2 = costs[1] + minCost(days, i, costs,dp);

        // Option 3: Buy a 30-day ticket
        int j = d;
        while (j < days.size() && days[j] - days[d] < 30) {
            j++;
        }
        int cost3 = costs[2] + minCost(days, j, costs,dp);

        // Return the minimum cost of the three options
        return dp[d] = min({cost1, cost2, cost3});
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>dp(days.size(), -1);
        return minCost(days,0,costs, dp);
       
    }
};