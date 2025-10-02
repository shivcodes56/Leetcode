class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m=g.size();   // length of greed vector
        int n=s.size();     // length of size vector
        int l=0;
        int r=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(l<m && r<n){
            if(s[r]>=g[l]){
                r=r+1;
                l=l+1;
            }else{
                r=r+1;
            }
        }
        return l;
    }
};