class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int curr_sub_sum= nums[0];
        int Max_sub_sum= nums[0];
        for(int i=1;i<n;i++){
            curr_sub_sum=max(nums[i],curr_sub_sum+ nums[i]);
           Max_sub_sum=max(Max_sub_sum,curr_sub_sum);
        }
        return Max_sub_sum;      
    }
};