class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        vector<int> v = s;
        sort(v.begin(), v.end());
        int count = 0;
        for (int i = 0; i < g.size(); i++) {
            int j = 0;
            while (j < v.size() && g[i] > v[j]) {
                j++;
            }
            if (j == v.size()) {
                return count;
            } else {

                v[j] = -1;
                count++;
            }
        }
        return count;
    }
};