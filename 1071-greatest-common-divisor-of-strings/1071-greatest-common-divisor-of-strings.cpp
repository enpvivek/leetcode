class Solution {
public:
    int gcd(int a, int b){
        return b == 0 ? a : gcd(b, a % b); 
    }
    
    string gcdOfStrings(string str1, string str2) {
        bool flag = true;
        int len=0;
        int n = gcd(str1.length(), str2.length());
        for(int i = 0; i < str1.length(); i++){
            if(str1[i]!=str2[i%n]){
                flag = false;
            }
        }
        for(int i = 0; i < str2.length(); i++){
            if(str2[i]!=str1[i%n]){
                flag = false;
            }
        }
        if(!flag){
            return "";
        }
        string ans ="";
        for(int i = 0; i < n; i++){
            ans+=str1[i];
        }
        return ans;
    }
};