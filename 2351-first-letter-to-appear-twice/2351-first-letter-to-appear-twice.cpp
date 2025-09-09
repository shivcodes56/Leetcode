class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                return s[i];
            }else{
               mp[s[i]]=1;
            }
        }
        return ' ';
    }
};