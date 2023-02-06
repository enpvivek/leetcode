class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int majorityElem = 0, majority = 0;
    for(auto it: mp){
        if(it.second> majority){
            majority = it.second;
            majorityElem = it.first;
        }
        
    }
        
        return majorityElem ;
    }  
};