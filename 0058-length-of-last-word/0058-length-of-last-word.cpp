class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int n = s.length()-1;
        
        for(int i = n; i>=0; i--){
            if(i==n){
                while(s[i]==' '){
                    i--;
                    //ans--;
                }
            }
            else{
               ans++;
            if(s[i]==' '){
                 return ans;
             } 
            }
            
        }
        
        
        // while(n--){
        //     ans++;
        //     if(s[n]==' '){
        //         return ans;
        //     }
        // }
            
            
        return ans+1;    
    }
};