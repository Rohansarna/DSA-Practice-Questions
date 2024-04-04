
class Solution {
public:
int mod = 1e9 + 7 ; 
    vector<vector<int>> adj = {{4, 6},    {6, 8}, {7, 9}, {4, 8}, {0, 3, 9}, {},
                               {0, 1, 7}, {2, 6}, {1, 3}, {2, 4}

    };
    int memo[5001][10]; 
    int func(int n, int cell) {
        if (n == 0) {
            return 1;
        }
        if(memo[n][cell] != -1){
            return memo[n][cell]; 
        }
        int ans =  0; 
        for(int &nextcell : adj[cell])
        {
            ans = ans% mod  +  func(n-1 , nextcell)%mod; 
        }
        return memo[n][cell] =  ans%mod; 



    }
    int knightDialer(int n) {
        int x = 5001 , y= 10; 
        memset(memo , -1 , sizeof(memo)); 
        int res = 0 ; 
        for(int i = 0 ; i <= 9 ; i++){
            res = res%mod  +  func(n-1 , i )% mod ;
        }
        return res%mod; 


    }
};