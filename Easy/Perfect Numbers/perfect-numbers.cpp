//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        long long perfect = -N;
        for(long long  i = 1; i*i <=N; i++){
            if(N%i==0){
                if(i*i==N){
                    perfect+=i;
                }
                else{
                    perfect+=i;
                    perfect+= (N/i);
                }
            }
            
        }
        return (perfect==N)? 1 : 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends