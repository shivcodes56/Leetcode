class Solution {
public:
    int strStr(string haystack, string needle) {
        string s1=haystack;
        string s2=needle;
        int m= haystack.size();
        int n=needle.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(s1[i+j]!=s2[j]){
                    break;
                }
                if(j==n-1){
                    return i;
                }
            }
        }
        return -1;
        
    }
};