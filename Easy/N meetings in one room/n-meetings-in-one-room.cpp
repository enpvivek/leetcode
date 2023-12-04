//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>vp;
        for(int i = 0; i < n; i++){
            vp.push_back(make_pair(start[i],end[i]));
        }
        sort(vp.begin(), vp.end(), [](const auto& a, const auto& b){
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second < b.second;
        });
        // for(auto it:vp){
        //   cout<<it.first<<" "<<it.second<<endl;
        // }
        int res = 0;
        int prev = 0;
        for(int i = 0; i < n; i++){
            if(vp[i].first > prev){
                res++;
                prev = vp[i].second;
            }
            //cout<<res<<" ";
        }
       return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends