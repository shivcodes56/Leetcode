class Solution {
public:
void backtrack(vector<int>& candidates,int target,vector<vector<int>>& result,int start,vector<int>&current,int total){
    if(total==target){
        result.push_back(current);
        return;
    }
    if(total>target){
        return;
    }
    for(int i=start;i<candidates.size();i++){
        current.push_back(candidates[i]);
        backtrack(candidates,target,result,i,current,total+candidates[i]);
        current.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>current;
        backtrack(candidates,target,result,0,current,0);
        return result;
        
    }
};