class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ansString = strs[0];
        string ansStr = "";
        
       int n = strs.size();
        for(int i = 1; i < n; i++){
            for(int j = 0; j < min(ansString.length(), strs[i].length()); j++){
                if(strs[i][j]!=ansString[j]){
                    break;
                }
                ansStr+=ansString[j];
            }
            cout<<ansString<<" "<<ansStr<<endl;
            ansString = ansStr;
            ansStr="";
        }
        
        
        return ansString;
    }
};