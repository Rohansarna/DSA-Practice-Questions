class Solution {
public:
    int CountOnes(int n) {
        int binaryNum[32];

        // counter for binary array
        int i = 0;
        while (n > 0) {

            // storing remainder in binary array
            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }

        // printing binary array in reverse order
        int res = 0;
        for (int j = i - 1; j >= 0; j--)
            if (binaryNum[j] == 1) {
                res++;
            }
        return res;
    }
    vector<int> countBits(int n) {
        vector<int> res;
        for (int i = 0; i <= n; i++) {
            res.push_back(CountOnes(i));
        }
        return res;
    }
};