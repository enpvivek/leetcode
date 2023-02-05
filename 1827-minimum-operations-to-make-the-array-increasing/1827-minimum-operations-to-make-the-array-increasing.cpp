class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        for(int i = 0; i < n; i++){
            v.push_back(nums[i]);
        }
        int i = 1, cnt = 0;
        while(i<n){
           if(v[i]<=v[i-1]){
               cnt+=v[i-1]-v[i]+1;
               v[i]+= v[i-1]-v[i]+1;
           } 
            else{
                i++;
            }
        }
        
        return cnt;
    }
};