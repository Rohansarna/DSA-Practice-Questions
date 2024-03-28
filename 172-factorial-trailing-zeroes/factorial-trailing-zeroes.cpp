class Solution {
public:
    int trailingZeroes(int n) {
        int x = n ; 
        int count = 0 ; 
        while(n > 0 ){
            int a = (n/5); 
            count += a; 
            n = a; 
        }
        return count; 
    }
};