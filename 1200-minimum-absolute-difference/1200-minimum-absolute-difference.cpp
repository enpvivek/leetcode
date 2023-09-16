class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int minDiff = INT_MAX;
        for(int i = 0; i < arr.size()-1; i++){
            minDiff = min(minDiff, arr[i+1]-arr[i]);
        }
        vector<vector<int>>ans;
        for(int i = 0; i < arr.size()-1; i++){
            vector<int>v;
            if(arr[i+1]-arr[i]==minDiff){
                v.push_back(arr[i]);
                v.push_back(arr[i+1]);
                ans.push_back(v);
            }
        }
        return ans;
    }
};