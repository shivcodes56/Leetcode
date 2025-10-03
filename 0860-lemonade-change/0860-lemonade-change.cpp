class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        for(int &bill: bills){
            if(bill==5){
                five++;
            }else if(bill==10){    // return $5 to customer when he gives $10
                if(five>0){
                    five--;
                    ten++;
                }else{
                    return false;
                }
            }
                else{
                    if(five>0 && ten>0){  // returning $15 to customer when he gives $20 to us 
                    five--;
                    ten--;
                }else if(five>=3){
                     five=five-3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};