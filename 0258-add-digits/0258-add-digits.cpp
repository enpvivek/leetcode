class Solution {
public:
    int sumOfDigits(int num){
        int ans = 0;
        while(num!=0){
            ans+=num%10;
            num = num/10;
            //cout<<ans<<endl;
        }
        return ans;
    }
    
    int addDigits(int num) {
        while(num>9){
            num = sumOfDigits(num);
        }
        return num;
    }
};