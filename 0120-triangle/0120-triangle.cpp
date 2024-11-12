class Solution {
public:

    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size(), n = triangle[m-1].size();
        vector<vector<int>>dp(m+2,vector<int>(n+2,INT_MAX));
        dp[0][0]=0;
        dp[0][1]=0;
        int x = 1;
        for(int i = 1; i<=m; i++){
            for(int j = 1; j<=x; j++){
                dp[i][j]= min(dp[i-1][j-1], dp[i-1][j]) + triangle[i-1][j-1];
            }
            x++;
        }

        x = 1;
        for(int i = 1; i <= m; i++){
            for(int j = 1; j<=x; j++){
                cout<<dp[i][j]<<" ";
            }
            x++;
            cout<<endl;
        }

        int minRes = dp[m][0];
        for(int i = 0; i <=n; i++){
            minRes = min(minRes, dp[m][i]);
        }
        //cout<<minRes<<endl;
        
        return minRes;
        
    }
};