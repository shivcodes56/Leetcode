class Solution {
    bool allCapital( string word){
        for(char ch: word){
            if(ch<'A' || ch>'Z'){
                return false;
            }
        }
        return true;
    }

        bool allsmall(string word){
            for(char ch: word){
                if(ch<'a' || ch>'z'){
                    return false;
                }
            }
            return true;
    }
public:
    bool detectCapitalUse(string word) {
        if(allCapital(word)==true || allsmall(word)==true || isupper(word[0])&& allsmall(word.substr(1))){
            return true;
        }
        return false;
        
    }
};