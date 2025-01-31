class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int N = *max_element(nums.begin() , nums.end()); 
        int n = nums.size(); 
        vector<int>v(n+1 , 0 ); 
        for(int i = 0 ; i < n ; i++){
            v[nums[i]]++; 
        }

        vector<int> res; 
        for(int i = 1 ; i < n+1 ; i++){
            if(v[i] == 0 ){
                res.push_back(i); 
            }
        }
        return res; 
    }
};