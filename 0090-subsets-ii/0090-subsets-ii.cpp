class Solution {
public:
void backtrack(int idx,vector<int>&curr,vector<vector<int>>&all,vector<int>&nums){
    int n=nums.size();
    all.push_back(curr);
    for(int i=idx;i<n;i++){
        //here I found duplicates
        if(i>idx && nums[i]==nums[i-1]){
            continue;
        }
        curr.push_back(nums[i]);
        backtrack(i+1,curr,all,nums);
        curr.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>curr;
        vector<vector<int>>all;
        sort(nums.begin(),nums.end());
        backtrack(0,curr,all,nums);
        return all;
    }
};