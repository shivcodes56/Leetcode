class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            //compare the characters over here
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;
            //loop ends here while wala 
        }
        return true;
    }
};