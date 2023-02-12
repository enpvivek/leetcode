class Solution {
public:
    bool checkPerfectNumber(int num) {
        int ans = 0;
        for(int i = 1; i<= (num+2)/2; i++){
            if(num%i==0){
                ans+=i;
            }
        }
       // cout<<ans<<endl;
        return ans==num && num!=1;
    }
};