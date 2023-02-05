class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        for(int i = 0; i < words.size(); i++){
            if(words[i].length()<pref.length()){
                continue;
            }
            for(int j = 0; j < pref.length(); j++){
                if(pref[j]!=words[i][j]){
                    break;
                }
                if(j==pref.length()-1)
                cnt++;
            }
        }
        
        
        
        return cnt;
    }
};