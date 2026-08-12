class Solution {
public:
int count=0;
void solve(int node,vector<vector<int>>&isConnected,vector<int>&visited,int &n){
    visited[node]=1;
     for(int i=0;i<n;i++){
        if(isConnected[node][i]==1 && !visited[i]){
           visited[i]=1;
           solve(i,isConnected,visited,n);
        }
     }
     return;
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>visited(n,0);
       for(int i=0;i<n;i++){
        if(!visited[i]){
            count++;
            solve(i,isConnected,visited,n);
        }
       }
       return count;
    }
};