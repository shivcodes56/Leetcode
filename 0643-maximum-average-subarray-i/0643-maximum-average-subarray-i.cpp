class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        double avg=0;
        double ans=INT_MIN;   // this stores the maximum average value with size==k=4 
        for(int r=0;r<n;r++){
         sum=sum+nums[r];
         if(r-l+1==k){
        avg=double(sum)/(r-l+1);
       ans=max(ans,avg);
       sum=sum-nums[l];
        l++;
         }
        }
        return ans;
    }
};