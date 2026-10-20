class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int n=nums.size();
        int i=0;
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
            }else{
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};