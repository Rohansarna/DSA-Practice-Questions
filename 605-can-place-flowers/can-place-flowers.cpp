class Solution {
public:
    bool canPlaceFlowers(vector<int>& flower, int n) {
        int size = flower.size();
        if (size == 1) {
            if (n == 1) {
                return flower[0] == 0;
            }
            return n == 0;
        }

        if (flower[0] == 0 && flower[1] == 0) {
            flower[0] = 1;
            n--;
        }
        for (int i = 1; i < size - 1;) {
            if (n <= 0) {
                return 1;
            }
            if (flower[i - 1] == 0 && flower[i] == 0 && flower[i + 1] == 0) {
                n--;
                flower[i] = 1;
                i += 2;
            } else {
                i++;
            }
        }
        // cout<< n << " ";
        if (flower[size - 1] == 0 && flower[size - 2] == 0) {
            flower[size - 1] = 1;
            n--;
        }
        return n <= 0;
    }
};