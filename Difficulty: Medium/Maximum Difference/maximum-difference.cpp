//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        int n =arr.size();
        int left[n], right[n];
        left[0] = 0, right[n - 1] = 0;
        stack<int>st;
        st.push(arr[0]);
        for (int i = 1; i < n; i++) {
            while (!st.empty() && st.top() >= arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                left[i] = 0;
            }
            else {
                left[i] = st.top();
            }
    
            st.push(arr[i]);
        }
        stack<int>rt;
        st.push(arr[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            while (!st.empty() && st.top() >= arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                right[i] = 0;
            }
            else {
                right[i] = st.top();
            }
    
            st.push(arr[i]);
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            //cout << left[i]<< " ";
            //cout << right[i] << " ";
            res = max(res, abs(left[i] - right[i]));
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string input;
        getline(cin, input);
        stringstream s2(input);

        vector<int> arr;
        int num;

        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends