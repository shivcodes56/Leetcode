class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int k=0;
        int sum=0;
        int closest=nums[0]+nums[1]+nums[2];
        for(int k=0;k<n-2;k++){
            int i=k+1;
            int j=n-1;
            while(i<j){
                sum=nums[k]+nums[i]+nums[j];
                if(sum==target){
                    return sum;
                }
                if(abs(sum-target)<abs(closest-target)){
                      closest=sum;
                }else if(sum<target){
                    i++;
                }else{
                    j--;
                }
            }
        }
        return closest;
        
    }
};