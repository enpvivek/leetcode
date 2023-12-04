//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        unordered_map<char,int> mc;
        mc.emplace('I', 1);
        mc.emplace('V', 5);
        mc.emplace('X', 10);
        mc.emplace('L', 50);
        mc.emplace('C', 100);
        mc.emplace('D', 500);
        mc.emplace('M', 1000);

        int res = mc[str[str.length()-1]];
        for(int i = str.length()-2; i>=0;i--){
            if(mc[str[i]]<mc[str[i+1]]){
                res-=mc[str[i]];
            }
            else{
                res+=mc[str[i]];
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends