class Solution {
public:
    string base10to7(int n){
        string ans="";
        while(n!=0){
            ans+=to_string(n%7);
            //cout<<n%7<<" ";
            n = n/7;
        }
       // cout<<ans<<endl;
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
    string convertToBase7(int num) {
        if(num == 0){
            return "0";
        }
        string ans = base10to7(abs(num));
        if(num<0){
            ans.insert(0, "-");
            return ans;
        }
        return ans;
        
    }
};