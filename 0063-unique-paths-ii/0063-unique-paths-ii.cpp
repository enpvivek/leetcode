class Solution {
    int paths[102][102] = {0};

    int totalPaths(vector<vector<int>>& obstacleGrid, int m, int n) {
        if (obstacleGrid[0][0] == 1) return 0;
         paths[1][1] = 1;
         for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (obstacleGrid[i-1][j-1] == 1) {
                    paths[i][j] = 0;  // Obstacle blocks the path
                } else {
                    if (i > 1) paths[i][j] += paths[i-1][j];  // From above
                    if (j > 1) paths[i][j] += paths[i][j-1];  // From left
                }
            }
        }
        return paths[m][n];
    }

public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        return totalPaths(obstacleGrid, m, n);
    }
};