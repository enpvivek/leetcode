class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int>dp(nums.size()+1);
        dp[0]=0;
        dp[1]=nums[0];
        for(int i = 1; i < nums.size()-1; i++){
            dp[i+1]=max(dp[i], nums[i]+dp[i-1]);
        }
        int res1 = dp[nums.size()-1];

        //second
        vector<int>dp2(nums.size()+1);
        dp2[1]=0;
        dp2[2]=nums[1];
        for(int i = 2; i < nums.size(); i++){
            dp2[i+1]=max(dp2[i], nums[i]+dp2[i-1]);
        }
        int res2 = dp2[nums.size()];
        for(auto it:dp2){
            cout<<it<<" ";
        }
        //cout<<res1<<" "<<res2<<endl;
        return max(res1,res2);
    }
};