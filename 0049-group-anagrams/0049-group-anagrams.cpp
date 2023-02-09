class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<int> v(strs.size() ,0); 
        vector<string> vs;
        for(int i = 0; i < strs.size(); i++){
            vs.push_back(strs[i]);
        }
        for(int i = 0; i < strs.size(); i++){
            sort(vs[i].begin(), vs[i].end());
        }
        vector<vector<string>> vvs;
        for(int i = 0; i < vs.size(); i++){
            if(v[i]==0){
                vector<string> vss;
                vss.push_back(strs[i]);
                v[i]=1;
                for(int j = i+1; j<strs.size(); j++){
                    if(vs[j]==vs[i]){
                        vss.push_back(strs[j]);
                        v[j]=1;
                    }
                   
                }
                 vvs.push_back(vss);
            }
        }
        // for(int i = 0; i < vs.size(); i++){
        //     cout<<vs[i]<<" ";
        // }
        // cout<<endl;
        
        
        return vvs;
    }
};