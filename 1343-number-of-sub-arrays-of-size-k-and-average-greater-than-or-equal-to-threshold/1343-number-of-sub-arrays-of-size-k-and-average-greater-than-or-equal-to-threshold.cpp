class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int l=0;
        int r=0;
        int sum=0;
        int count=0;
        int avg=0;
        for(int r=0;r<n;r++){
            sum=sum+arr[r];
            if(r-l+1==k){
                avg=(sum)/(r-l+1);
                if(avg>=threshold){
                    count++;
                }
                sum=sum-arr[l];
                l++;
            }
        }
        return count;
    }
};