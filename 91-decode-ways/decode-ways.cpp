class Solution {
public:
    vector<int>dp ; 
    int func(string &s , int i ){
        if(i >= s.length() ){
            return 1; 
        }
        if(s[i] == '0'){
            return 0; 
        }
        if(dp[i] != -1){
            return dp[i]; 
        }
        if(i + 1 < s.size() && (s[i] =='1' || (s[i] == '2' &&(  s[i + 1 ]<= '6' && s[i+1] >= '0' ) )) ){
            return dp[i] =  func(s , i+1 ) + func( s, i  +2)    ; 
        }
        else{
            return dp[i] = func(s , i + 1)  ;  
        }






    }
    int numDecodings(string s) {
        dp.resize(s.size()  + 1 , -1); 
        return func(s , 0 );       
    }
};