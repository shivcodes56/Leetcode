class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int count=INT_MAX;
        for(int r=0;r<n;r++){
            sum=sum+nums[r];
            while(sum>=target){
                int len=r-l+1;
                count=min(count,len);
                sum=sum-nums[l];
                l++;
            }
        }
        if(count==INT_MAX){
            return 0;
        }
        return count;
    }
};