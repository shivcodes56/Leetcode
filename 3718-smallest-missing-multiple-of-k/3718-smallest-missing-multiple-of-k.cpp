class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i=1;
        int n=nums.size();
        unordered_set<int>mp;
        for(int i=0;i<n;i++){
         mp.insert(nums[i]);
        }
        while(i<100*k){
            if(mp.find(i*k)!=mp.end()){
                i++;   // moving to the next multiple
                continue;
            }else{
                return i*k;
            }
        }
        return 0;
    }
};