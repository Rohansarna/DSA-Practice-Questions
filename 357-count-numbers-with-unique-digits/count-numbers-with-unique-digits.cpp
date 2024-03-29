class Solution {
public:
    int func2(int n )
    {
        int x = 9 ; 
        for(int i = 9 ; i >= (11-n) ; i --  ){
            x = (x*i)%1000000007; 
        }
        return x%1000000007; 
    }
    int func(int n ){
        vector<int> dp(n + 1 , 0 );
        dp[0] = 1; 
        dp[1] = 10 ; 
        dp[2] = 91;  
        for(int i = 2 ; i <= n ; i++){
            dp[i] = (dp[i-1]%1000000007 + func2(i)%1000000007)%1000000007; 
        }
        return dp[n]; 
    }
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0 ){
            return 1;  
        }
        if(n == 1){
            return 10; 
        }
        if(n == 2){
            return  91; 
        }
        return func(n); 
    }
};


// n =    0  1   2   3    4
// val =  1  9  91  739  5275 

// 9