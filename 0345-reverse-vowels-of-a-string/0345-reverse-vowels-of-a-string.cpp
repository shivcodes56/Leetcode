class Solution {
public:
bool isvowel(char c){
    unordered_set<char>vowels={'A','E','I','O','U','a','e','i','o','u'};
    return vowels.find(c)!=vowels.end();
    //returns true if s[i] is an vowel 
}
    string reverseVowels(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        while(i<=j){
            if(!isvowel(s[i])){
                i++;
            }else if(!isvowel(s[j])){
                j--;
            }else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};