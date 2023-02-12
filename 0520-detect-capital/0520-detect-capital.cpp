class Solution {
public:
    bool detectCapitalUse(string word) {
       
        if(word[0]>64&& word[0]<91){
            if(word[1]>64 && word[1]<91){
                for(int i = 2; i < word.length(); i++){
                 if(word[i]>96 && word[i]<123){
                     return false;
                  } 
               }
            }
            else{
               for(int i = 2; i < word.length(); i++){
                 if(word[i]>64 && word[i]<91){
                     return false;
                  } 
               }
            }
        }
        else{
            for(int i = 1; i < word.length(); i++){
                 if(word[i]>64 && word[i]<91){
                     return false;
                 }
            }
        }
      return true;
    }
};