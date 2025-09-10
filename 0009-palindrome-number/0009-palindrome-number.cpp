class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long rev=0;   // this will be the reversed number 
        int temp=x;
        while(temp>0){
            // this is the logic to find the reverse of an given number mathematically 
            int digit=temp%10;
            rev=rev*10+digit;
            temp=temp/10;
        }
        if(x==rev){
            return true;
        }
        return false;
    }

};