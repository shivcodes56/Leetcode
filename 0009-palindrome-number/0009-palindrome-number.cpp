class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long rev=0;  // long long isliye ki overflow na hojaye
        int temp=x;
        while(temp>0){
            // this is how you reverse an integer mathematically 
            int digit=temp %10;
            rev=rev*10+digit;
            temp=temp/10;
        }
        if(x==rev){
            return true;
        }
        return false;
    }
};