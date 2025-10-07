class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(),hand.end());
        unordered_map<int,int>mp;
        for(int &h:hand){
            mp[h]+=1;
        }
        for(int &card:hand){
            if(mp[card]==0)
                continue;
           int need=mp[card];
           for(int i=0;i<groupSize;i++){
            if(mp[card+i]<need){
                return false;
            }else{
                mp[card+i]=mp[card+i]-need;
            }
           }
            

        }
        return true;
    }
};