class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.length();
        int n=t.length();
        if(m!=n){
            return false;
        }
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char ch:s){
            mp1[ch]++;  //count occurances in s string
        }
        for(char ch:t){
            mp2[ch]++;
        }
        if(mp1==mp2){
            return true;
        }else{
            return false;
        }
    }
};