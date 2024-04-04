class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int ,int> m ;
        int res = INT_MIN ; 
        for(int i = 0 ; i < arr.size() ; i++){
            m[arr[i]] = m[arr[i] - difference] + 1 ;
            res = max(res , m[arr[i]]);  
        }
        return res; 
    }
};