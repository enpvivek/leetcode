//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        if(str1.length()!=str2.length()) return 0;
        bool flag1 = true, flag2 = true;
        for(int i = 0; i < str1.length(); i++){
            if(str1[i]!=str2[(i+2)%str1.length()]){
                flag1=false;
                break;
            }
        }
        for(int i = 0; i < str1.length(); i++){
            if(str2[i]!=str1[(i+2)%str1.length()]){
                flag2=false;
                break;
            }
        }
        return flag1||flag2;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends