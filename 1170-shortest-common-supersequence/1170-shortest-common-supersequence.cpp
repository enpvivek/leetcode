class Solution {
public:
    string LCS(string s1, string s2) {
        int m = s1.length(), n = s2.length();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        
        // DP table to find LCS length
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        
        // Reconstruct the LCS string
        int i = m, j = n;
        string lcs;
        while (i > 0 && j > 0) {
            if (s1[i - 1] == s2[j - 1]) {
                lcs = s1[i - 1] + lcs;
                i--;
                j--;
            } else {
                if (dp[i - 1][j] > dp[i][j - 1]) {
                    i--;
                } else {
                    j--;
                }
            }
        }
        
        return lcs;
    }

    string shortestCommonSupersequence(string str1, string str2) {
        string lcs = LCS(str1, str2);  // Get the LCS
        string res = "";

        int i = 0, j = 0;
        
        for (char c : lcs) {
            while (str1[i] != c) {
                res += str1[i];
                i++;
            }
            while (str2[j] != c) {
                res += str2[j];
                j++;
            }
            res += c;
            i++;
            j++;
        }
        
        while (i < str1.length()) {
            res += str1[i];
            i++;
        }
        while (j < str2.length()) {
            res += str2[j];
            j++;
        }

        return res;
    }
};
