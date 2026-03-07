class Solution {
public:
void backtrack(int idx,vector<int>&curr,vector<vector<int>>&all,vector<int>&nums){
    int n=nums.size();
    if(idx==n){
     all.push_back(curr);
     return;
    }
    //pick
    curr.push_back(nums[idx]);
    backtrack(idx+1,curr,all,nums);
    curr.pop_back();
//skip
backtrack(idx+1,curr,all,nums);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>curr;
        vector<vector<int>>all;
        backtrack(0,curr,all,nums);
        return all;
    }
};