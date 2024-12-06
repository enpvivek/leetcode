class Solution {
public:
    void subset(vector<vector<int>>& res, vector<int>& v, vector<int> &t, int p) {
        res.push_back(t);
        for(int i = p; i < v.size(); i++){
            if(i!=p && v[i]==v[i-1]){
               continue;
            }
            t.push_back(v[i]);
            subset(res,v,t,i+1);
            t.pop_back();
        }
        return ;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        sort(v.begin(), v.end());
        vector<vector<int>>res;
        vector<int>t;
        int p = 0;
        subset(res,v,t,p);
        return res;
    }
};

/*
1   2   2

*/
