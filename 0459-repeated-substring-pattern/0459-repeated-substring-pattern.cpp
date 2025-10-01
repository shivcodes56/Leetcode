class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int len=1;len<=n/2;len++){   // l here is the length of the substring 
               if(n%len==0){
                int times=n/len;
               string str=s.substr(0,len);
               string newstr="";
               while(times--){
                newstr=newstr+str;
               }
               if(newstr==s){
                return true;
               }
        }
        }
    return false;
        
    }
};