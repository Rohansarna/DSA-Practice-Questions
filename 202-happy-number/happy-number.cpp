class Solution {
public:
    bool func(int n, map<int, int>& m) {
       if(n <=9){
        if(n == 1 || n == 7){
            return 1; 
        }
        return 0; 
       }
        int sum = 0 ; 
        while(n )
        {
            int x = n %10 ; 
            sum += m[x]; 
            n = n/10; 
        }
        return func(sum , m ); 


    }

    bool isHappy(int n) {
        map<int,int> m ;  
        for(int i  = 0 ; i<= 9 ; i++){
            m[i] = i*i ; 
        } 
    return func(n , m); 
    // return 0 ; 
    
    
    }
};