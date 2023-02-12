class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
      map<int, int> mp;
        vector<string>ans(score.size(), "");
        for(int i = 0; i < score.size(); i++){
            mp[score[i]]=i;
        }
        
        for(auto it: mp){
            cout<<it.first<<" "<<it.second<<endl;
        }
        int i = 1;
        for (auto it = mp.rbegin(); it != mp.rend(); it++) {
            if(i==1){
                ans[it->second]="Gold Medal";
            }
            else if(i==2){
                ans[it->second]="Silver Medal";
            }
            else if(i==3){
                ans[it->second]="Bronze Medal";
            }
            else{
                ans[it->second]= to_string(i);
            }
            i++;
        }
        
        
        return ans;
    }
};