class Solution {
    int paths[101][101] = {0};

    int totalPaths(vector<vector<int>>& obstacleGrid, int m, int n) {
        if (m < 1 || n < 1 || (obstacleGrid[m - 1][n - 1] == 1)) {
            return 0;
        } else if (m == 1 && n == 1) {
            return 1;
        } else if (paths[m][n] != 0) {
            return paths[m][n];
        }
        paths[m][n] = totalPaths(obstacleGrid, m - 1, n) +
                      totalPaths(obstacleGrid, m, n - 1);
        return paths[m][n];
    }

public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        return totalPaths(obstacleGrid, m, n);
    }
};