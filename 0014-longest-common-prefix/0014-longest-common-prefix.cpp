class Solution {
public:
string commonprefix(vector<string>&strs){
    sort(strs.begin(),strs.end());   // sort the given array 
       int index=0;
       string str1=strs[0];
       string str2=strs[strs.size()-1];
       while(index<str1.length()){
        if(str1[index]==str2[index]){
            index++;
        }else{
            break;
        }
       }
       return str1.substr(0,index);    // over here in c++ we use substr for substring related questions 
}
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0){
            return "";
        }
         return commonprefix(strs);
        
    }
};