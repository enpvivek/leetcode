class Solution {
    

    int cherryPick(int &row, int &col, int r, int c1, int c2, vector<vector<int>>& grid,vector<vector<vector<long>>>&dp){
        if((c1==c2) || (min(c1,c2)<0) || (max(c1,c2)>=col)) return 0;
        if(r==row-1) return grid[r][c1]+grid[r][c2];
        if(dp[r][c1][c2]!=-1) return dp[r][c1][c2];

        int res = 0;
        for(int i = -1; i <=1; i++){
            for(int j = -1; j <=1; j++){
                res = max(res, cherryPick(row,col,r+1,c1+i,c2+j,grid,dp));
            }
        }
        dp[r][c1][c2] = res+grid[r][c1]+grid[r][c2];
        return dp[r][c1][c2];
    }
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size();
        vector<vector<vector<long>>> dp(row, vector<vector<long>>(col, vector<long>(col, -1)));
        int res = cherryPick(row,col,0,0,col-1,grid, dp);
        
        
        return res;
    }
};
