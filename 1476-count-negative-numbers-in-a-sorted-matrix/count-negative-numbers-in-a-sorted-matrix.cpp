class Solution {
public:
    int func(vector<int> &v ){
        int low = 0 ; 
        int high = v.size()-1; 
        int count_res  = 0 ; 
        while(low <= high){
            int mid  = ((low + high)/ 2); 
            if(v[mid] < 0 ){
                count_res  = (high - mid + 1); 
                for(int i = mid-1 ; i >= 0 ; i-- ){
                    if(v[i] < 0 ){

                    count_res ++ ; 
                    }
                }
                break ; 
            }
            else if(v[mid] >= 0 ){
                low  = mid + 1; 
            }
            else{
                high = mid -1; 
            }



        }
        return count_res ; 
    }
    int countNegatives(vector<vector<int>>& grid) {
        int res = 0 ; 
        for(int i = 0 ; i < grid.size() ; i ++){
            cout<< func(grid[i]) <<" "; 
            res += func(grid[i]); 
        }
        return res; 
    }
};