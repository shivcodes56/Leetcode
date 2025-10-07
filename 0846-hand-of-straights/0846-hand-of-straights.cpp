class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(),hand.end());  // sort
        unordered_map<int,int>mp;
        for(int &h:hand){
// increase count in map or build the map
            mp[h]=mp[h]+1;
        }
       // now we have to build the groups 
       for(int &card:hand){
        if(mp[card]==0)
        continue;
      int need= mp[card];
       for(int i=0;i<groupSize;i++){
        if(mp[card+i]<need){  //check if you have enough cards to make the group 
            return false;
        }else{
            mp[card+i]=mp[card+i]-need;  // if you have enough then substract
        }
        return true;
       }
      
    }
};