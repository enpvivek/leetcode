//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        int start = 0, end = n-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(arr[mid]==1){
                if(mid-1==-1 || arr[mid-1]==0){
                    return mid;
                }
                else{
                    end = mid;
                }
            }
            else{
                start = mid+1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends