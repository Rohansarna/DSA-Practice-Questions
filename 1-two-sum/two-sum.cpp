class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res ; 
        int n = nums.size(); 
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                int x  = nums[i] + nums[j]; 
                if(x == target ){
                    res.push_back(i);
                    res.push_back(j);
                    break; 
                }
            }
        }
        return res; 
    }
};