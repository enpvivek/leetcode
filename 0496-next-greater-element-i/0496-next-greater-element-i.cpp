class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> nextGreater(n, 0);
        for(int i = 0; i < n-1; i++){
            int j = i+1;
            while(j!=n){
                if(nums2[i]<nums2[j]){
                    nextGreater[i]=nums2[j];
                    break;
                }
                j++;
            }
            if(j==n){
                nextGreater[i]=-1;
            }
            
        }
        nextGreater[n-1]=-1;
        vector<int>ans(nums1.size(), 0);
        
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    ans[i]=nextGreater[j];
                }
            }
        }
        // for(auto it: nextGreater){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        
        
        return ans;
    }
};