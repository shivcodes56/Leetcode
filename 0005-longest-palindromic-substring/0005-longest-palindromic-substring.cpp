class Solution {
public:
int n;
bool solve(string &s,int i,int j){
    if(i>=j){
        return true;
    }
    if(s[i]==s[j]){
        return solve(s,i+1,j-1);
    }
    return false;
}
    string longestPalindrome(string s) {
        n=s.length();
        int maxlength=INT_MIN;
        int startpt=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(solve(s,i,j)==true){
                    if(j-i+1>maxlength){
                        maxlength=j-i+1;
                        startpt=i;
                    }
                }
            }
        }
        return s.substr(startpt,maxlength);
    }
};