//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        if (N == 0) {
            return "";
        }
        string res = "";
        int i = 0;
        while (true) {
            if (i >= arr[0].length()) {
                break;
            }
            char c = arr[0][i];
            bool mismatch = false;
            for (int j = 1; j < N; j++) {
                if (i >= arr[j].length() || arr[j][i] != c) {
                    mismatch = true;
                    break;
                }
            }
            if (mismatch) {
                break;
            }
            res += c;
            i++;
        }
        if(res.length()==0) res+="-1";
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends