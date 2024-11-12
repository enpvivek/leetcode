class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>>dp(n+2, vector<int>(n+3, INT_MAX));
        for(int i = 1; i <=n; i++){
            dp[0][i]= 0;
            dp[1][i]=matrix[0][i-1];
        }

        for(int i = 1; i <=n; i++){
            for(int j = 1; j <=n; j++){
                dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1],dp[i-1][j+1]));
                dp[i][j] += matrix[i-1][j-1];
            }
        }
        int res = dp[n][0];
        for(int i = 0; i <= n; i++){
           //cout<<dp[n][i]<<" ";
           res = min(res,dp[n][i]);
        }
        return res;
    }
};