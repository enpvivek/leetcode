class Solution {
public:
    char findTheDifference(string s, string t) {
    
        unordered_map<char, int> mp;
        for(int i = 0; i < s.length(); i++){
           mp[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++){
           mp[t[i]]++;
        }
        for(auto it: mp){
            if(it.second%2!=0){
                return it.first;
            }
        }
        char c = 'a';
        
        return c;
    }
};