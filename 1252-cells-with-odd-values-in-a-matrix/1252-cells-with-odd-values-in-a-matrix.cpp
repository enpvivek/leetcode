class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> vec(m, vector<int> (n, 0));
        
        // for(int i = 0; i < vec.size(); i++){
        //     for(int j = 0; j < vec[0].size(); j++){
        //         cout<<vec[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i = 0; i < indices.size(); i++){
            for(int j = 0; j < vec[0].size(); j++){
                vec[indices[i][0]][j]++;
            }
            for(int j = 0; j < vec.size(); j++){
                vec[j][indices[i][1]]++;
            }
        }
        
        int cnt = 0;
        
        for(int i = 0; i < vec.size(); i++){
            for(int j = 0; j < vec[0].size(); j++){
                if(vec[i][j]%2!=0){
                    cnt++;
                }
            }
            
        }
        
        
        
        return cnt;
    }
};