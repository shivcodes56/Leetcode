class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minprice=prices[0];
        int maxprofit=0;
        for(int i=0;i<n;i++){
            if(prices[i]<minprice){
                minprice=prices[i];
            }
            int currprofit=prices[i]-minprice;
             if(currprofit>maxprofit){
                maxprofit=currprofit;
             }
           

        }
        return maxprofit;
    }
};