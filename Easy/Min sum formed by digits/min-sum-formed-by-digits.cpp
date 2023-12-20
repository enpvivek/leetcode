//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int minSum(int arr[], int n){
        long long sum = 0;
        if (n < 3) {
            if (n == 0) return 0;
            else if (n == 1) return arr[0];
            else if (n == 2) return arr[0] + arr[1];
        }
        sort(arr, arr + n);
        string a = "", b = "";
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                a += to_string(arr[i]);
            }
            else {
                b += to_string(arr[i]);
            }
        }
        //cout<<a<<" "<<b<<endl;
        long long inta = stoll(a);
        long long intb = stoll(b);
        sum = intb + inta;
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends