class Solution {
public:
unordered_set<string>st;
int n;
int t[301];
bool solve(int idx,string &s){
    if(idx==n){
        return true;
    }
    if(st.find(s)!=st.end()){
        return true;
    }
    if(t[idx]!=-1){
        return t[idx];   // ek hi dimension ka isliye lia kyunki sirf idx change horha hai idx+1 horha hai
    }
    for(int l=1;l<=n;l++){
        string temp=s.substr(idx,l);
        if(st.find(temp)!=st.end() && solve(idx+l,s)==true){
            return t[idx]=true;
        }
    }
    return t[idx]= false;
}
    bool wordBreak(string s,vector<string>&wordDict) {
        for(string &word:wordDict){
            st.insert(word);  // map mein mene vector<string>wordDict store kar dia haii
        }
        memset(t,-1,sizeof(t));
        n=s.length();
        return solve(0,s);
        
    }
};