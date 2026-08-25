class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int>mp;
        for(int i=0;i<n;i++){
            mp.insert(nums[i]);
        }
        int i=1;
        while(i<1000*k){   // so that all test cases pass ho jaye so 1k,2k,3k,4k,5k,6k
         if(mp.find(i*k)!=mp.end()){
            i++;
            continue;
         }else{
            return i*k;
         }
        }
        return 0;
    }
};