class Solution {
    int paths[101][101] = {0};

int totalPaths(int m, int n) {
    if (m < 1 || n < 1) {
        return 0;
    }
    else if (m == 1 && n == 1) {
        return 1;
    }
    else if (paths[m][n] != 0) {
        return paths[m][n];
    }

    paths[m][n] = totalPaths(m - 1, n) + totalPaths(m, n - 1);
    return paths[m][n];
}
public:
    int uniquePaths(int m, int n) {
       // cout << totalPaths(m, n) << endl;
       return totalPaths(m, n);
    }
};