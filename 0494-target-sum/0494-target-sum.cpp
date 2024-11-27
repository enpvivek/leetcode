class Solution {
public:
    int ways(vector<int>&nums, int curr, int target, int i, unordered_map<string,int>&mp){
        if(i>=nums.size()){
            return curr == target ? 1 : 0;
        }
        string res = to_string(i) + "$" + to_string(curr);
        if(mp.find(res)!=mp.end()) return mp[res];

        mp[res] = ways(nums, curr+nums[i], target, i+1,mp) + ways(nums,curr-nums[i], target, i+1,mp);
        return mp[res];
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<string,int>mp;
  
        return ways(nums, 0, target, 0, mp);
    }
};
