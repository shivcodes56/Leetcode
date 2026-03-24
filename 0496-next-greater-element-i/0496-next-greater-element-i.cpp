class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>mp;
        int n=nums2.size();
        for(int i=0;i<n;i++){
            while(!st.empty() &&nums2[i]>st.top()){  
                 mp[st.top()]=nums2[i];
                 st.pop();
            }
               st.push(nums2[i]);
        }
        //for remaining elements 
        while(!st.empty()){
           mp[st.top()]=-1;
           st.pop();
        }
        vector<int>result;
        for(int i=0;i<nums1.size();i++){
            result.push_back(mp[nums1[i]]);
        }
        return result;
    }
};