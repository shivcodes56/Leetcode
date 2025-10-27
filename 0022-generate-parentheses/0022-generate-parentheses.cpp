class Solution {
public:
void backtrack(string current,int open,int close, int n,vector<string>&result){
    if(current.length()==2*n && open==close){
        result.push_back(current);
        return;
    }
    if(open<n){
        backtrack(current+'(',open+1,close,n,result);

    }
    if(close<open){
        backtrack(current+')',open,close+1,n,result);
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>result={};
        string current="";
        int open=0;
        int close=0;
  backtrack(current,open,close,n,result);
      return result;
        
    }
};