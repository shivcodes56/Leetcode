class Solution {
public:
    bool isPalindrome(int x) {
        //convert int to string 
        if(x<0){
            return false;
        }
        string s=to_string(x);
        string rev=s;
        reverse(rev.begin(),rev.end());
        if(s==rev){
            return true;
        }
        return false;
    }
};