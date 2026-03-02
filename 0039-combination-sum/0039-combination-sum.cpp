class Solution {
public:
void backtrack(int idx,int sum,vector<int>&temp, vector<int>candidates,vector<vector<int>>&result,int target){
    if(sum==target){
        result.push_back(temp);
        return;
    }
    if(sum>target || idx>=candidates.size()){
        return;
    }
    //two options pick or skip
    temp.push_back(candidates[idx]);
    backtrack(idx,sum+candidates[idx],temp,candidates,result,target);
    temp.pop_back();

    //skip
    backtrack(idx+1,sum,temp,candidates,result,target);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>result;
        backtrack(0,0,temp,candidates,result,target);
        return result;
        
    }
};