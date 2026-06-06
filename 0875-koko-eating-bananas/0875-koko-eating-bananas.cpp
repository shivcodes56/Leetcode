class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=0;
        for(int i=0;i<n;i++){
            if(piles[i]>high){
                high=piles[i];
            }
        }
        int ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
             long long total_hours=0;
            for(int i=0;i<n;i++){
                int hours_needed=(piles[i]+mid-1)/mid;   // this is to avoid using the floating point
                total_hours=total_hours+hours_needed;
            }
             if(total_hours<=h){
                ans=mid;
               high=mid-1;
        }else{
            low=mid+1;
        }
        }
       return ans;
        
    }
};