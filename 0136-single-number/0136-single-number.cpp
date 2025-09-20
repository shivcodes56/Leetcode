class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++){
            res=res^nums[i];   // this basically nullifies the elements which are repeating and only the element which is different will be seen 
        }
        return res;
    }
};