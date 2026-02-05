class Solution {
public:
bool ispalindrome(string &s){
    int n=s.length();
    int i=0;
    int j=n-1;
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
    int removePalindromeSub(string s) {
        if(ispalindrome(s)==true){
            return 1;
        }else{
            return 2;
        }
        
    }
};