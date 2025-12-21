class Solution {
public:
int robfrom(int i,vector<int>&dp, const vector<int>&nums){
    int n=nums.size();
    if(i>=n){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int rob=nums[i]+robfrom(i+2,dp,nums);
    int skip=robfrom(i+1,dp,nums);
    dp[i]=max(rob,skip);
    return dp[i];
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>dp1(n,-1),dp2(n,-1);
        int ans1=robfrom(0,dp1,vector<int>(nums.begin(),nums.end()-1));   //rob from house0 to n-2
        int ans2=robfrom(0,dp2,vector<int>(nums.begin()+1,nums.end()));
        return max(ans1,ans2);
    }
};