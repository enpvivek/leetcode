class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string licenseKey = "";
        int step = 0;
       for(int i = s.length()-1; i>=0; i--){
           if(s[i]=='-'){
               continue;
           }
           else{
               
               if(step%k==0 && licenseKey!=""){
                   licenseKey+="-";
               }
               licenseKey+=s[i];
               step++;
           }
           
       } 
        
       reverse(licenseKey.begin(), licenseKey.end());
        transform(licenseKey.begin(), licenseKey.end(), licenseKey.begin(), ::toupper);
       return    licenseKey;
    }
};