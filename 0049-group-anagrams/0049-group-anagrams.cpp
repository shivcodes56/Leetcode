class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto &word: strs){
            string key=word;   //key here is sorted word
            sort(key.begin(),key.end());
            mp[key].push_back(word);
        }
        vector<vector<string>>result;
        //iterate in the given map
        for(auto it:mp){
            result.push_back(it.second);
        }
        return result;
    }
};