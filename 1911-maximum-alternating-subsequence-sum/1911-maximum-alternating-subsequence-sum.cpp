class Solution {
public:
typedef long long ll;
int n;
long long t[1000001][2];
ll solve(int i,vector<int>&nums,bool flag){
    if(i>=n){
        return 0;
    }
    if(t[i][flag]!=-1){    // vohi condition of dp:if(dp[i]!=-1)
        return t[i][flag];
    }
    ll skip=solve(i+1,nums,flag); // skip jab karenge then no change
    ll val=nums[i];
    if(flag!=true){
    val=-val;
    }
    ll take=solve(i+1,nums,!flag)+val;    // take ke case mein flag change
    return t[i][flag]=max(skip,take);
} 
    long long maxAlternatingSum(vector<int>& nums) {
            n=nums.size();
            memset(t,-1,sizeof(t));   //wtf is this?
            return solve(0,nums,true); // 0,true=even
        
    }
};