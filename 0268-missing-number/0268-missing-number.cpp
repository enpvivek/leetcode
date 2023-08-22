class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n = v.size();
        int hash[10000] = {0};
    for (int i = 0; i <n; i++) {
        hash[v[i]]++;
    }
    
    for (int i = 0; i < n+1; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }
        return 0;
    }
    
};