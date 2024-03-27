class Solution {
public:
    int romanToInt(string s) {
        map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        int res = 0;
        for (int i = 0 ; i < s.length(); ) {
            int currVal = m[s[i]];
            int nextVal = i <=s.length()-2 ? m[s[i + 1]] : -1;
     
            if (currVal >= nextVal) {
                res += currVal;
                i++; 
            } else {
                res += abs(currVal - nextVal);
                i += 2;
            }
        }
        
        return res;
    }
};