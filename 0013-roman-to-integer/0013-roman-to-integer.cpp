class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int n = s.length();
        for(int i = 0; i < s.length()-1; i++){
            if(s[i]=='I'&& (s[i+1]=='V' || s[i+1]=='X')){
                ans-=1;
            }
            else if(s[i]=='X'&& (s[i+1]=='L' || s[i+1]=='C')){
                ans-=10;
            }
            else if(s[i]=='C'&& (s[i+1]=='M' || s[i+1]=='D')){
                ans-=100;
            }
            else if (s[i]=='I'){
                ans+=1;
            }
            else if (s[i]=='V'){
                ans+=5;
            }
            else if (s[i]=='X'){
                ans+=10;
            }
            else if (s[i]=='L'){
                ans+=50;
            }
            else if (s[i]=='C'){
                ans+=100;
            }
            else if (s[i]=='D'){
                ans+=500;
            }
            else if (s[i]=='M'){
                ans+=1000;
            }
            
            
            
            
            
            // if(s[i]=='I' && s[i+1]=='I'){
            //     ans+=1;
            // }
            // if(s[i]=='V' && s[i+1]=='I'){
            //     ans+=5;
            // }
            // if(s[i]=='X' && (s[i+1]=='I' || s[i+1]=='V' || s[i+1]=='X')){
            //     ans+=10;
            // }
            // if(s[i]=='L' && (s[i+1]=='I' || s[i+1]=='V' || s[i+1]=='X')){
            //     ans+=50;
            // }
            // if(s[i]=='C' && (s[i+1]=='I' || s[i+1]=='V' || s[i+1]=='X')){
            //     ans+=50;
            // }
            // if(s[i]=='D' && (s[i+1]=='I' || s[i+1]=='V' || s[i+1]=='X' || s[i+1]=='C')){
            //     ans+=50;
            // }
            // if(s[i]=='M' && (s[i+1]=='I' || s[i+1]=='V' || s[i+1]=='X' || s[i+1]=='C' || s[i+1]=='D')){
            //     ans+=50;
            // }
        }
        if(s[n-1]=='I'){
            ans+=1;
        }
        else if(s[n-1]=='V'){
            ans+=5;
        }
        else if(s[n-1]=='X'){
            ans+=10;
        }
        else if(s[n-1]=='L'){
            ans+=50;
        }
        else if(s[n-1]=='C'){
            ans+=100;
        }
        else if(s[n-1]=='D'){
            ans+=500;
        }
        else if(s[n-1]=='M'){
            ans+=1000;
        }
        //cout<<ans;
        return ans;
    }
};