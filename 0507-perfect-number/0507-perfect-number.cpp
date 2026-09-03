class Solution {
public:
    bool checkPerfectNumber(int num) {
        int original=num;
        int sum=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                sum=sum+i;
            }
        }
        if(sum==original){
            return true;
        }
       return false;
        
    }
};