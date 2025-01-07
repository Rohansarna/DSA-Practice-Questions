class Solution {
public:
    // Kadane Algo very important !!
    int maxSubArray(vector<int>& nums) {
        int res = nums[0]; 
        int maxi = nums[0]; 
        for(int i = 1 ; i< nums.size() ; i++){
            maxi = max(maxi + nums[i] , nums[i] ); 
            res = max(res , maxi ); 
        }
        return res; 
    }
};