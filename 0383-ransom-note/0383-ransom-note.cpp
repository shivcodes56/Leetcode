class Solution {
public:
    bool canConstruct(string s1, string s2) {
        int m=s1.length();
        int n=s2.length();
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i=0;i<m;i++){
            mp1[s1[i]]++;
        }
        for(int j=0;j<n;j++){
            mp2[s2[j]]++;
        }
     for(auto it:mp1){
        char ch=it.first;
        if(mp1[ch]>mp2[ch]){
            return false;
        }
     }
     return true;
    }
};