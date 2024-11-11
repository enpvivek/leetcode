class Solution {
    int path[202][202] = {INT_MAX};

public:
    int minPathSum(vector<vector<int>>& grid) {
        for (int i = 0; i < 202; i++) {
            std::fill(std::begin(path[i]), std::end(path[i]), INT_MAX);
        }
        path[0][0]=0;
        path[0][1]=0;
       // path[1][1]=grid[0][0];
        int m = grid.size(), n = grid[0].size();
        for(int i = 1; i<=m; i++){
            for(int j = 1; j<=n; j++){
                path[i][j]=grid[i-1][j-1] + min(path[i][j-1], path[i-1][j]);
            }
        }

        for(int i = 0; i < 6; i++){
            for(int j = 0; j < 6; j++){
                cout<<path[i][j]<<" ";
            }
            cout<<endl;
        }
    
        return path[m][n];
    }
};