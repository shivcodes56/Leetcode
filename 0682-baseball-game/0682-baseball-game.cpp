class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int el1=0;
        int el2=0;
        int sum=0;
        int n=operations.size();
        for(int i=0;i<n;i++){
            if(operations[i]!="C"&& operations[i]!="D" && operations[i]!="+"){
               st.push(stoi(operations[i]));
            }
            if(operations[i]=="C"){
                st.pop();
            }
            if(operations[i]=="D"){
                st.push(2*st.top());
            }
            if(operations[i]=="+"){
               el1=st.top();
               st.pop();
                 el2=st.top();
                 st.pop();
                 sum=el1+el2;
                st.push(el2);
                st.push(el1);
                st.push(sum);
            }
        }
        int total=0;
        while(!st.empty()){
            total=total+st.top();
            st.pop();
        }
        return total;
    }
};