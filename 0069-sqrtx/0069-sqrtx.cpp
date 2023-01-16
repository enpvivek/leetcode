class Solution {
public:
    int mySqrt(int x) {
        int a=0;
        for(long long int i = 1; i*i <= x; i++){
            a++;
        }
        //cout<<a;
        
        return a;
    }
};