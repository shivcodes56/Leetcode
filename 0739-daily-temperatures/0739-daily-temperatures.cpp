class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>ans(temp.size(),0);
        stack<int>st;
        int n=temp.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && temp[i]>temp[st.top()]){
                int previdx=st.top();
                st.pop();
                ans[previdx]=i-previdx;
            }
            st.push(i);
        }
        return ans;
        
    }
};