class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int>st;
        int minVal = nums[0];
        for(int i = 0; i < nums.size(); i++){
            minVal = min(minVal, nums[i]);
            st.insert(nums[i]);
        }
        if(minVal < k){
            return -1;
        }
        else if(minVal==k){
            return st.size()-1;
        }
        else{
            return st.size();
        }
    }
};