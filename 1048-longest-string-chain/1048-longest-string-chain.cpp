class Solution {
public:
int n;
int t[1001][1001];
static bool myFunction(string&word1,string&word2){
    return word1.length()<word2.length();
}
bool checkpred(string&prev,string&curr){
    int M=prev.length();
    int N=curr.length();
    if(M>N || N-M!=1){
        return false;
    }
    int i=0,j=0;
    while(i<M && j<N){
        if(prev[i]==curr[j]){
            i++;
        }
        j++;
    }
    return i==M;
}
int solve(vector<string>&words,int i,int p){
    if(i>=n){
        return 0;
    }
    if(t[i][p+1]!=-1){
        return t[i][p+1];
    }
    int take=0;
    if(p==-1 ||checkpred(words[p],words[i])){  // checkpred function bana
       take=1+solve(words,i+1,i);
    }
    int skip=solve(words,i+1,p);
    return t[i][p+1]= max(take,skip);
}
    int longestStrChain(vector<string>& words) {
        n=words.size();
        memset(t,-1,sizeof(t));
        sort(words.begin(),words.end(),myFunction);
        return solve(words,0,-1);
    }
};