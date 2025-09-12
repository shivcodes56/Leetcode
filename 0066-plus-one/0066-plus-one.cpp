class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n=digits.size();
       for(int i=n-1;i>=0;i--){
        if(digits[i]==9){
            digits[i]=0;   // ye sirf tab hoga jab last mein 9 ayega 
        }else{
            digits[i]++;
            return digits;
        }
       }
       vector<int> newdigits(n+1,0);
        newdigits[0]=1;
        return newdigits;
    }
};