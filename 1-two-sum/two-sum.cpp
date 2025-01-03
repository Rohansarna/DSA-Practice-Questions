class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int ,int> x ; 
        int n = nums.size(); 
        for(int i = 0 ; i < n ; i++){
            x.insert({nums[i] , i }); 
        }
        for(int i = 0 ; i<nums.size() ;i++){
            int y = target - nums[i]; 
            if(x.find(y) != x.end() && x[y] !=  i ){
                return {i , x[y]}; 
            } 
        }
        return {0 , 0}; 



    }
};


// Brute Force
// vector<int> twoSum(vector<int>& nums, int target) {
//     vector<int> res;
//     int n = nums.size();
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             int x = nums[i] + nums[j];
//             if (x == target) {
//                 res.push_back(i);
//                 res.push_back(j);
//                 break;
//             }
//         }
//     }
//     return res;
// }