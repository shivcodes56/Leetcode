class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        unordered_map<char,int>mp;
        for(char ch: jewels){
            mp[ch]=1;
        }
        for(int i=0;i<stones.length();i++){
            if(mp.find(stones[i])!=mp.end()){   // checks the exsistence of stones that are jewels 
                count++;
            }
        }
        return count;
    }
};