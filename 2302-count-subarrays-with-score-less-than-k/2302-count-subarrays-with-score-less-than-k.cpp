class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        long long l=0;
        long long r=0;
        long long sum=0;
        long long count=0;
        for(int r=0;r<n;r++){
             sum=sum+nums[r];
            while(sum*(r-l+1LL)>=k){
                sum=sum-nums[l];
                l++;
            }
            count=count+(r-l+1);
        }
        return count;
    }
};