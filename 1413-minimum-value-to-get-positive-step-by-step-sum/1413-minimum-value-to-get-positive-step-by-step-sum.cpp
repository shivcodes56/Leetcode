class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int mini=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            mini=min(sum,mini);
        }
        int startval=1-mini;
        return startval;
        
    }
};