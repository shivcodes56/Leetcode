class Solution {
public:
bool dfs(vector<vector<char>>&board,string &word,int i,int j,int idx){
   if(idx==word.size()){
    return true;
   }
            if(i<0||i>=board.size()||j<0||j>=board[0].size()||board[i][j]!=word[idx]){
                return false;
            }
            //mark as visited
            char temp=board[i][j];
            board[i][j]='#';  // for visited cell we are using a special character 
bool found=dfs(board,word,i+1,j,idx+1)||
dfs(board,word,i-1,j,idx+1)||
dfs(board,word,i,j+1,idx+1)||
dfs(board,word,i,j-1,idx+1);   // we move down,up,right,left recursively
board[i][j]=temp;
    return found;
}
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        int idx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(dfs(board,word,i,j,0)==true){
                    return true;
                }
            }
        }
        return false;
    }
};