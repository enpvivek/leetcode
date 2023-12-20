//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
       //int arr[N]= {0};
       int cut = N / (2 * K);
        int left = 1 + (cut * K);
        int right = N - (cut * K);
        
        if(right < left){
            return left;
        }
        
        if(right - left + 1 <= K){
            return right;
        }
        else{
            left += K;
            return left;
        }
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends