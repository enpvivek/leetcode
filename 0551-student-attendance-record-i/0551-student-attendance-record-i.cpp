class Solution {
public:
    bool checkRecord(string s) {
        int ab = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='A'){
                ab++;
            }
            if(i < s.length()-2 && (s[i]=='L' && s[i+1]=='L' && s [i+2] =='L')){
                return false;
            }
        }
        
        return ab<2;
    }
};