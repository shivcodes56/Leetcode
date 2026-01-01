class Solution {
public:
 int t[101];
int solve(int i,string &s,int &n){
    if(i>=n){
        return 1;   // only valid split
    }
    if(t[i]!=-1){
        return t[i];
    }
    if(s[i]=='0'){
        return 0;
    }
    int take_ith_char=solve(i+1,s,n);
    int take_ith_plus1_char=0;
    if(i+1<n){
        if(s[i]=='1' || (s[i]=='2' && s[i+1]<='6')){
            take_ith_plus1_char=solve(i+2,s,n);
        }
    }
    return t[i]= take_ith_char+take_ith_plus1_char;
}
    int numDecodings(string s) {
        int n=s.length();
        memset(t,-1,sizeof(t));
        return solve(0,s,n);
        
    }
};