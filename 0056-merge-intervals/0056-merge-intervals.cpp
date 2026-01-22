class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>merged;  // will store the merged intervals
        for(int i=0;i<n;i++){
            if(merged.empty()){
                merged.push_back(intervals[i]);
            }else if(intervals[i][0]>merged.back()[1]){ // it means if(curr.start> previous.end) then I wont overlap and simply push that interval into merged vector which stores my overlapping intervals 
                merged.push_back(intervals[i]);
            }
            else{
                merged.back()[1]=max(merged.back()[1],intervals[i][1]);
            }
        }
       
        return merged;
    }
};