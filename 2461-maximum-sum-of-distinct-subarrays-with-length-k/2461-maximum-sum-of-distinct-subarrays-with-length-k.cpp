class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        long long sum=0;
        long long ans=0;
        unordered_map<int,int>mp;
        for(int r=0;r<n;r++){
         sum=sum+nums[r];
         mp[nums[r]]++;   // incrementing the frequency here 
         if(r-l+1>k){
            sum=sum-nums[l];
            mp[nums[l]]--;
           if(mp[nums[l]]==0){
            mp.erase(nums[l]);
           }
           l++;
         }
         if(r-l+1==k && mp.size()==k){
            ans=max(ans,(long long)sum);
         }
        }
        return ans;
    }
};