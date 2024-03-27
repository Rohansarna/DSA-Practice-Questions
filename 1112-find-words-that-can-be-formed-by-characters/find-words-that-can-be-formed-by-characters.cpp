class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int >m1; 
        int res = 0; 
        for(int i = 0 ; i < chars.size() ; i++){
            m1[chars[i]]++; 
        }
        for(int i = 0 ; i < words.size() ; i++ ){
            string x = words[i] ; 
            map<char,int > check = m1;
            bool f = 1; 
            for(int j = 0 ; j < x.size() ; j++){
                if(check.find(x[j]) != check.end() && check[x[j]] > 0 ){
                    check[x[j]]--; 
                }
                else{
                    f = 0;
                    break  ;
                }
            }
            if(f == 1){
                res += x.size(); 
            }
        }
        return res; 
    }
};