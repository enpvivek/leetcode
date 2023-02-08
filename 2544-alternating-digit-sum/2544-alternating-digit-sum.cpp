class Solution {
public:
    
    int alternateDigitSum(int n) {
        string s = to_string(n);
        bool flag = true;
        int sum = 0, i = 0;
        while(i<s.length()){
            if(flag){
                char c = s[i];
                sum+=int(c) - 48;
                flag =!flag;
            }
            else{
                char c = s[i];
                sum-=int(c) - 48;
                flag =!flag;
            }
            i++;
        }
        
        
        
        return sum;
    }
};