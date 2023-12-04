//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int inSequence(int A, int B, int C){
        if(C==0){
            if(A!=B) return 0;
            else return 1;
        }
        if(((B-A)%C!=0)) return 0;
        
        if(C>0 && A>0){
            if(B<A) return 0;
        }
        if(C<0 && A<0){
            if(B>A) return 0;
        }
        if(C>0 && A<0){
            if(B<A) return 0;
        }
        if(C<0 && A>0){
            if(B>A) return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin>>A>>B>>C;
        
        Solution ob;
        cout<<ob.inSequence(A, B, C)<<endl;
    }
    return 0;
}
// } Driver Code Ends