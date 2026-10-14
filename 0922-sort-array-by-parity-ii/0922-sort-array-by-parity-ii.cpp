class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0;
        int j=1;
        int n=nums.size();
        while(i<n && j<n){
            if(nums[i]%2==0){    // even
               i=i+2;
            }
            else if(nums[j]%2!=0){
               j=j+2;
            }else{
                swap(nums[i],nums[j]);
                i=i+2;
                j=j+2;
            }
        }
        return nums;
    }
};