class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        int r=0;
        int zeros=0;
        int ans=0;   // this stores the maximum length with consecutive ones where k zeros are flipped 
        for(int r=0;r<n;r++){
            if(nums[r]==0){
                zeros++;
            }
            while(zeros>k){   // window becomes invalid 
            if(nums[l]==0){
                zeros--;
            }
            l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};