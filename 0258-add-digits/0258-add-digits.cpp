class Solution {
public:
    int addDigits(int num) {
        int original=num;
        int sum=0;
        int sum_total=0;
        int sum_ttotal=0;
        while(num>0){
            int digit=num%10;
            sum=sum+digit;
            num=num/10;
        }
        while(sum>0){
            int digit_no=sum%10;
            sum_total=sum_total+digit_no;
            sum=sum/10;
        }
        while(sum_total>0){
            int digit_num=sum_total%10;
            sum_ttotal=sum_ttotal+digit_num;
            sum_total=sum_total/10;
        }
        return sum_ttotal;
    }
};