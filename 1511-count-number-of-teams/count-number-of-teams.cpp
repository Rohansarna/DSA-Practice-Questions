class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size(); 
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < n; i++) {
            int x = rating[i];
            for (int j = i + 1; j < n; j++) {
                int y = rating[j];
                for (int k = j + 1; k < n; k++) {
                    int z = rating[k]; 
                    if (x < y && y < z) {
                        count1++;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            int x = rating[i];
            for (int j = i + 1; j < n; j++) {
                int y = rating[j];
                for (int k = j + 1; k < n; k++) {
                    int z = rating[k];
                    if (x > y && y > z) {
                        count2++;
                    }
                }
            }
        }
        return count1 + count2; 
    }
};