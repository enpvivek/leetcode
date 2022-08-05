class Solution {
public:
    void setZeroes(vector<vector<int>>& vec) {
        if(vec.size()==0){
            return;
        }
        int m = vec.size();
        int n= vec[0].size();
       vector<int> vm(m, 1);
    vector<int> vn(n, 1);

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            if (vec[i][j] == 0) {
                vm[i] = 0;
                vn[j] = 0;
            }
        }
    }

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            if (vm[i] == 0 || vn[j] == 0) {
                vec[i][j] = 0;
            }

        }
    } 
    }
};