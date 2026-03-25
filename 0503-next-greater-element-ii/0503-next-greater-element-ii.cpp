class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        int n=nums.size();
        vector<int>result(n,-1);
        for(int i=0;i<2*n;i++){
           int num=i%n;
           while(!st.empty() && nums[num]>nums[st.top()]){
            result[st.top()]=nums[num];
            st.pop();
           }
           if(i<n){
            st.push(num);
           }
          
        }
        return result;
    }
};