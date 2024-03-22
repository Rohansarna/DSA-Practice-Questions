class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows <= 1)
            return s;

        vector<string> v(numRows , "");
        int dir = -1;
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            if (j == 0 || j == (numRows - 1)) {
                dir *= -1;
            }
                v[j] += s[i];
            if (dir == -1) {
                j--;
            }
            if (dir == 1) {
                j++; 
            }
        }
        string res =""; 
        for(auto &it : v ){
            res += it; 
        }
        return res ;

    }
    //  string convert(string s, int numRows) {
    //     int col = ceil(s.length() / 2);
    //     vector<vector<char>> v(numRows, vector<char>(col));
    //     int counter = 0;
    //     for (int i = 0; i < numRows; i++) {
    //         for (int j = 0; j < col; j++) {
    //             int x = j % (numRows - 1);
    //             if (x == 0) {
    //                 if (i == 0 || j == 0) {
    //                     //    if(i == 0 && j ==0 ){
    //                     //     v[i][j] = s[i];
    //                     //    }
    //                     //    else if(i != 0 ){
    //                     //     int idx = ((i + j)* 2 - i)%s.length() ;
    //                     //         v[i][j] = s[idx];
    //                     //    }
    //                     //    else{
    //                     //     int idx = ((i + j)* 2 - j)%s.length() ;
    //                     //     v[i][j] = s[idx];
    //                     //    }
    //                     // }
    //                     // else{
    //                     //     int idx = ((i + j)* 2 - i)%s.length() ;
    //                     //     v[i][j] = s[idx];
    //                     //     // cout<< 1 <<" ";
    //                     // }
    //                     int idx = ((i + j) * 2 - i) % s.length();
    //                     v[i][j] = s[idx];
    //                 } else {
    //                     if ((i + j) % (numRows - 1) == 0) {
    //                            if(i == 0 || j ==0 ){
    //                                if(i == 0 && j ==0 ){
    //                                 v[i][j] = s[i];
    //                                }
    //                                else if(i != 0 ){
    //                                 int idx = ((i + j)* 2 - i)%s.length() ;
    //                                     v[i][j] = s[idx];
    //                                }
    //                                else{
    //                                 int idx = ((i + j)* 2 - j)%s.length() ;
    //                                 v[i][j] = s[idx];
    //                                }
    //                             }
    //                             else{
    //                                 int idx = ((i + j)* 2 - i)%s.length();
    //                                 v[i][j] = s[idx];
    //                                 // cout<< 1 <<" ";
    //                             }
    //                         // int idx = ((i + j) * 2 - i) % s.length();
    //                         // v[i][j] = s[idx];
    //                     } else {
    //                         v[i][j] = '\0';
    //                         // cout<< 0 <<" ";
    //                     }
    //                 }
    //             }
    //         }
    //         // cout<<endl;
    //     }
    //     for (int i = 0; i < numRows; i++) {
    //         for (int j = 0; j < v[i].size(); j++) {
    //             cout << v[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    // return " ";
    // }
};