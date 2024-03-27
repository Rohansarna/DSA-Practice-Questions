class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return 0; 
        }
        map<char , set<char>> m;
        map<char , set<char>> m2;
        for(int i = 0 ; i < s.length() ; i++){
            m[s[i]].insert(t[i]); 
            m2[t[i]].insert(s[i]); 
        }
       auto i = m.begin() , j = m2.begin(); 
       while(i != m.end() && j != m2.end()){
            if((i->second).size() != 1  || (j ->second).size() != 1){
                return 0; 
            }
            i++ , j ++; 
       }




        return 1 ; 
    }
};