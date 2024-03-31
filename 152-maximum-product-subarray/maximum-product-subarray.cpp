class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        if (nums.size() == 1) {
            return nums[0];
        }
        int res = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            if (x > res) {
                res = x;
            }
            for (int j = i + 1; j < nums.size(); j++) {
                x = x * nums[j];
                if (x > res) {
                    res = x;
                }
            }
            if (x > res) {
                res = x;
            }
        }
        return res;
    }
};