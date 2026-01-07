class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        int minL=INT_MAX;
        int sum=0;
        while(j<n){
            //then we need to simply shrink the given window size 
            sum=sum+nums[j];
            while(sum>=target){
                 int currlen=j-i+1;
            sum=sum-nums[i];
            minL=min(minL,currlen);
            i++;
            }
            j++;
        }
        if(minL==INT_MAX)
         return 0;
        return minL;
        
    }
};