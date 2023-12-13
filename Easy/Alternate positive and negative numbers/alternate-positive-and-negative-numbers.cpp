//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int>pos;
	    vector<int>neg;
	    for(int i = 0; i < n; i++){
	        if(arr[i]>=0){
	            pos.push_back(arr[i]);
	        }
	        else{
	            neg.push_back(arr[i]);
	        }
	    }
	    int i = 0, j = 0, k = 0;
	    for(int i = 0; i < n; i++){
	        if(i%2==0){
	            if(j<pos.size()){
	                arr[i]=pos[j];
	                j++;
	            }
	            else{
	                arr[i]=neg[k];
	                k++;
	            }
	        }
	        else{
	            if(k<neg.size()){
	                arr[i]=neg[k];
	                k++;
	            }
	            else{
	                arr[i]=pos[j];
	                j++;
	            }
	        }
	    }
	    return;
	}    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends