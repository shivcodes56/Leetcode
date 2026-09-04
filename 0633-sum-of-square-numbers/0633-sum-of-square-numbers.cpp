class Solution {
public:
    bool judgeSquareSum(int c) {
        int bsquare;
        for(long long a=0;a*a<=c;a++){
            bsquare =c- a*a;
            int b=sqrt(bsquare);
            if(b*b==bsquare){
                return true;
            }
        }
        return false;
    }
};