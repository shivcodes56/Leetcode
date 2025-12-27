class Solution {
public:
int n;
int t[1001][1001];
int solve(vector<vector<int>>&pairs,int i,int p){
    if(i>=n){
        return 0;
    }
    if(t[i][p+1]!=-1){
        return t[i][p+1];
    }
    int take=0;
    if(p==-1 || pairs[p][1]<pairs[i][0]){
        take=1+solve(pairs,i+1,i);
    }
    int skip=solve(pairs,i+1,p);
    t[i][p+1]= max(take,skip);
    return max(take,skip);
}
    int findLongestChain(vector<vector<int>>& pairs) {
        n=pairs.size();
        memset(t,-1,sizeof(t));
        sort(pairs.begin(),pairs.end());
        return solve(pairs,0,-1);
        
    }
};