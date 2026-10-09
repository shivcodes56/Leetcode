class Solution {
public:
    int getMaximumGenerated(int n) {
       vector<int>nums(n+1,0);
       if(n==0){
        return 0;
       }
       nums[1]=1;
       for(int i=2;i<=n;i++){
          if(i%2==0){
            nums[i]=nums[i/2];
          }else{
            nums[i]=nums[i/2]+nums[i/2+1];
          }
       }
         int maxi=0;
         int num=nums.size();
         for(int i=0;i<num;i++){
            if(nums[i]>maxi){
                maxi=max(maxi,nums[i]);
            }
         }
     return maxi;
        
    }
};