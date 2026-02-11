class Solution {
public:
int sumofsquares(int n){
    int sum=0;
    while(n>0){
       int last_digit=n%10;
        sum=sum+last_digit*last_digit;
        n=n/10;
    }
    return sum;
}
    bool isHappy(int n) {
        unordered_set<int>mp1;
        while(n!=1){
            if(mp1.find(n)!=mp1.end()){
                return false;
            }
            mp1.insert(n);
            n=sumofsquares(n);
        }
        return true;
    }
};