class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int, int> mp;
        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        unordered_set<int>st;
        for(auto it: mp){
           // cout<<it.first<<" "<<it.second<<endl;
           st.insert(it.second); 
        }
        return st.size()==mp.size();
    }
};