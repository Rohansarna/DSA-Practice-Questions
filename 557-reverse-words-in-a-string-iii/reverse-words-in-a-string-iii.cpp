class Solution {
public:
    string reverseWords(string s) {
        int i = 0 ; 
        int j = 0 ;
        string temp =""; 
        string res=""; 
        while(i < s.length()){
            if(s[i] == ' '){
               reverse(s.begin() + j , s.begin() + i );  
               j = i + 1; 

            }
            else{
                temp += s[i]; 
            }
            i++; 
        }
        reverse(s.begin() + j , s.end() );  
        return s;
    }
};