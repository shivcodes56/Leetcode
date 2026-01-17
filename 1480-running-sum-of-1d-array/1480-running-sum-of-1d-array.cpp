class Solution {
public:
vector<int>prefixsum;
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        prefixsum.push_back(sum);
        for(int i=1;i<n;i++){
            sum+=nums[i];
            prefixsum.push_back(sum);
        }
            return prefixsum;
    }
};