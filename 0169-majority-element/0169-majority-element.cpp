class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int maj=nums[0];
        for(int i=1;i<n;i++){
            if(count==0){    //agar count=0 ho to maj=nums[i] vo current el ho jata
                count=1;     // and count is changed to 1
                maj=nums[i];  //assume
            }else if(nums[i]==maj){     // agar value maj hai to count++ karo 
                count++;
            }else{
                count--;
            }
        }
        return maj;
    }
};