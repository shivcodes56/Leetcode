class Solution {
public:
    bool isBalanced(string num) {
        int sum1=0;
        int sum2=0;
        int n=num.length();   // length isliye because string hai
        for(int i=0;i<n;i++){
            int digit=num[i]-'0';   //converts char into int as ascii value of 0 is 48
            if(i%2==0){   // agar even hua
                sum1=sum1+digit;
            }else{
                sum2=sum2+digit;
            }
        }
        if(sum1==sum2){
            return true;
        }else{
            return false;
        }
    }
};