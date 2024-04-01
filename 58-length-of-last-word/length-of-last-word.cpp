class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<int> v;
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                if(count != 0){

                v.push_back(count);
                }
                count = 0;
            } else {
                count++;
            }
        }
        for (auto x : v) {
            cout << x << " ";
        }
         if(count != 0){

                v.push_back(count);
                }
        return v[v.size() - 1];
    }
};