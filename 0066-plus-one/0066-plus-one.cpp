class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n=digits.size();
       for(int i=n-1;i>=0;i--){
        if(digits[i]==9){
            digits[i]=0;
        }else{
            digits[i]++;   // agar vo 9 nhi hai like the last number so usko ek se bada do simple 
            return digits;
        }
       }
        vector<int>newdigits(n+1,0);   // so hamne ek nayi vector list bana di hai jisme n+1 elements honge sare 0 honge bas phela element 1 hoga and ye bhi tab hoga jab sare elements 9 ho jayega to carry mein 1 ajayega
        newdigits[0]=1;
        return newdigits;
    }
};