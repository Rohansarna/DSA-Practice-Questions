class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0 ;

        bool f = 0;  
        for(int i = s.length()-1 ; i>=0 ; i--){
            if(s[i] == ' ' && f){
                break ; 
            }
            if(s[i]!= ' '){
                count ++ ; 
                f = 1;
            }
        }
        return count ; 
    }
};