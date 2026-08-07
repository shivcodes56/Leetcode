class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char ch:s){
            mp1[ch]++;    // basically this is how u insert values into the hashmap
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