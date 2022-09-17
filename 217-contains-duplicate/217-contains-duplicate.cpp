class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       bool flag = false;
       unordered_map<int, int>mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.second>1){
                flag = true;
            }
        }
    return flag;
    }
};