class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length();
        int l=0;
        int r=0;
        int len=0;
        int count=0;    
        int ans=0;           // this stores the max no of vowels in a substring with given lenght k 
        for(int r=0;r<n;r++){
            len=len+s[r];   // expanding the window
            if(s[r]=='a' || s[r]=='e' || s[r]== 'i'||
            s[r]=='o'||s[r]=='u'){
                count++;
            }
            if(r-l+1==k){   // size reach hogya
          ans=max(ans,count);
          len=len-s[l];
          if(s[l]=='a' || s[l]=='e' || s[l]== 'i'||
            s[l]=='o'||s[l]=='u'){
                 count--;
            }
          l++;
            }
        }
        return ans;
    }
};