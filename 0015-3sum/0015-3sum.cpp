class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        int k=0;
       for(int k=0;k<n-2;k++){
        //for skipping the duplicates
            if( k>0 && nums[k]==nums[k-1]){
                continue;
            }
            int i=k+1;
            int j=n-1;
            while(i<j){
                int sum=nums[k]+nums[i]+nums[j];
                if(sum<0){
                    i++;
                }else if(sum>0){
                    j--;
                }else{
                    result.push_back({nums[k],nums[i],nums[j]});
                    i++;
                    j--;
                    while(i<j && nums[i]==nums[i-1]){
                        i++;
                    }
                    while(i<j && nums[j]==nums[j+1]){
                        j--;
                    }
                }
            }
       }
       return result;
        
    }
};