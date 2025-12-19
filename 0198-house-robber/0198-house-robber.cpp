class Solution {
public:
int robfrom(int i,vector<int>&dp,vector<int>&nums){
    int n=nums.size();
    if(i>=n){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int rob=nums[i]+robfrom(i+2,dp,nums);
    int skip=robfrom(i+1,dp,nums);
    return dp[i]=max(rob,skip);
    
}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return robfrom(0,dp,nums);
        
    }
};