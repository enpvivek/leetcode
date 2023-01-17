// int fib(int n){
//    if(n<=1){
//        return n;
//    } 
//     return fib(n-1)+fib(n-2);
// }
class Solution {
public:
    int climbStairs(int n) {
        
        int t1 = 0;
        int t2 = 1;
        int next = 0;
        for(int i = 1; i <=n; i++){
           next = t1+t2;
            t1 = t2;
            t2 = next;
        }
        
        return next;
        //return fib(n+1);
    }
};