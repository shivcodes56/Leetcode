class Solution {
public:
vector<string>result;
void backtrack(string str,int open,int close,int &n){
    if(open==n && close==n){
        result.push_back(str);
    }
    if(open<n){
        backtrack(str+'(',open+1,close,n);
    }
    if(close<open){
        backtrack(str+')',open,close+1,n);
    }
}
    vector<string> generateParenthesis(int n) {
        string str="";  //empty string here 
        int open=0;
        int close=0;
       backtrack("",0,0,n);
       return result;
    }
};