class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int N = *max_element(arr.begin() , arr.end()); 
        vector<bool> x (N + 1 , 0 ) ; 
        for(int i = 0 ; i < arr.size() ; i++){
            x[arr[i]] = 1;
        }


        for(int i = 1 ; i<=N ; i++ ){
            if(x[i] == 0){
                k--; 
            if(k == 0){
                return i ; 
            }
            }
        }

        return N + k ; 
    }
};