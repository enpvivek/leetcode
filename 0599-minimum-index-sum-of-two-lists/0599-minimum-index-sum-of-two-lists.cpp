class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int minIdx = 2000;
        unordered_map<string, int> mp;
        for(int i = 0; i < list1.size(); i++){
            for(int j = 0; j < list2.size(); j++){
                if(list1[i]==list2[j]){
                    if(i+j<=minIdx){
                        mp[list1[i]]=i+j;
                    }
                    minIdx = min(minIdx, i+j);
                }
            }
        }
        vector<string>ans;
        for(auto it: mp){
            if(it.second==minIdx){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};