class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int m = s1.length(), n = s2.length();
        
        // Create a 2D dp array, where dp[i][j] will store the length of LCS of s1[0..i-1] and s2[0..j-1]
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        
        // Fill the dp table using bottom-up approach
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;  // Characters match, extend the LCS
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);  // Take the max from the previous row or column
                }
            }
        }
        
        // The length of the LCS is stored in dp[m][n]
        return dp[m][n];
    }
};
