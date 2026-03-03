class Solution {
public: 
void backtrack(int idx,int sum,vector<int>&temp,int target,vector<vector<int>>&result,vector<int>&candidates){
    if(sum==target){
        result.push_back(temp);
        return;
    }
    if(sum>target || idx>=candidates.size()){
        return;
    }
    for(int i=idx;i<candidates.size();i++){
        //handles the duplication part over here 
        if(i>idx && candidates[i]==candidates[i-1]){
            continue;
        }
        temp.push_back(candidates[i]);
        backtrack(i+1,sum+candidates[i],temp,target,result,candidates);
        temp.pop_back();

    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>result;
        sort(candidates.begin(),candidates.end());
        backtrack(0,0,temp,target,result,candidates);
        return result;
    }
};