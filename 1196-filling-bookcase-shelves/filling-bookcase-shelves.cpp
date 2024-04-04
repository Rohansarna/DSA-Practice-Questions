class Solution {
public:
vector<vector<int>> dp;
    int solve(int i , int max_height , int rem_width , int shelfwidth , vector<vector<int>> & v ){
        if( i== v.size()){
            return max_height; 
        }
        if(dp[i][rem_width]!= -1 ){
            return dp[i][rem_width]; 
        }
        int curr_shelf = INT_MAX , next_shelf = INT_MAX; 
        int book_width = v[i][0]; 
        int book_height = v[i][1]; 
        if(book_width <= rem_width ){
            curr_shelf = solve(i + 1 , max(max_height , book_height) , rem_width - book_width , shelfwidth , v ); 
        }
        next_shelf =  max_height +  solve(i + 1 , book_height , shelfwidth - book_width , shelfwidth , v ); 

        return dp[i][rem_width] = min(curr_shelf , next_shelf); 

    }
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
         dp.resize(1001, vector<int> (shelfWidth + 1, -1));
        return solve( 0 , 0 , shelfWidth , shelfWidth , books); 
    }
};