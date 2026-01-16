class NumArray {
public:
vector<int>prefixarr;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        prefixarr.push_back(sum);
        for(int i=1;i<n;i++){
            sum=sum+nums[i];
            prefixarr.push_back(sum);
        }
        
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return prefixarr[right];
        }
        return (prefixarr[right]- prefixarr[left-1]);
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */