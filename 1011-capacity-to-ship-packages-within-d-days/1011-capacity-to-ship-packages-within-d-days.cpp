class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=0;   // max num 
        for(int i=0;i<n;i++){
        if(weights[i]>low){
            low=weights[i];
        }
        }
        long long high=0;
        for(int i=0;i<n;i++){
            high=high+weights[i];   // I need the sum 
        }
         int ans=0;
         while(low<=high){
            long long mid=low+(high-low)/2;
            int days_needed=1;
            int load=0;
            for(int i=0;i<n;i++){
                if(load+weights[i]>mid){
                    days_needed++;
                    load=weights[i];
                }else{
                    load=load+weights[i];
                }
            }
            if(days_needed<=days){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
         }
        return ans;
    }
};