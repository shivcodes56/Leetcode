class Solution {
public:
void solve(int i,int j,vector<vector<char>>&grid, vector<vector<int>>&visited,int n,int m){
    visited[i][j]=1;
    if(i-1>=0 && grid[i-1][j]=='1' && !visited[i-1][j]){   // upwards
        solve(i-1,j,grid,visited,n,m); 
    }
    if(i+1<n && grid[i+1][j]=='1' && !visited[i+1][j]){    // downwards
        solve(i+1,j,grid,visited,n,m);
    }
    if(j-1>=0 && grid[i][j-1]=='1' && !visited[i][j-1]){  //leftwards
        solve(i,j-1,grid,visited,n,m);
    }
    if(j+1<m && grid[i][j+1]=='1' && !visited[i][j+1]){
        solve(i,j+1,grid,visited,n,m);
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    count++;
                    solve(i,j,grid,visited,n,m);
                }
            }
        }
        return count;
    }
};