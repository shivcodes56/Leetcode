class Solution {
public:
int Maxcount=0;
void backtrack(int idx,unordered_set<string>&set,int count,string &s){
    if(idx==s.length()){
        Maxcount=max(Maxcount,count);
        return;
    }
    for(int i=idx;i<s.length();i++){
        string sub=s.substr(idx, i-idx+1);
        if(set.count(sub)==0){
            set.insert(sub);
            backtrack(i+1,set,count+1,s);
            set.erase(sub);
        }
    }
}
    int maxUniqueSplit(string s) {
        unordered_set<string>set;
        backtrack(0,set,0,s);
        return Maxcount;  
    }
};