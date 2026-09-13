class Solution {
public:
    string defangIPaddr(string address) {
        string s=address;
        for(int i=0;i<s.length();i++){
            if(s[i]=='.'){    // for a single character use '.'
             s.insert(i,"[");
             s.insert(i+2,"]");
             i=i+2;
            }
        }
        return s;
    }
};