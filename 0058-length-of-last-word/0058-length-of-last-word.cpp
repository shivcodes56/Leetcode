class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        while(i>=0 && s[i]==' '){
            i--;
        }
        int count=0;   // this will basically store the length over here
        while(i>=0){
            if(s[i]!=' '){   //agar space nhi hai 
            count++;
            i--;
            }else{
                break;
            }
        }

        return count;
    }
};