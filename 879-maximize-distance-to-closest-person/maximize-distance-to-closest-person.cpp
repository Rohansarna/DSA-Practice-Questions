class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return seats[n - 1] == 1 ? 0 : 1;
        }
        if (n == 2) {
            if (seats[0] == 0 && seats[1] == 1) {
                return 1;
            } else {
                return 0;
            }
        }
        vector<int> right(n, 0);
        vector<int> left(n, 0);
        bool f = 0;
        int counter = 0;
        int i = 0;
        while (i < n) {
            if (seats[i] == 1) {
                f = 1;
                counter = 0;
            } else {
                if (f) {
                    counter++;
                }
            }
            right[i] = counter;
            i++;
        }
        i = n - 1;
        f = 0;
        while (i >= 0) {
            if (seats[i] == 1) {
                counter = 0;
                f = 1;
            } else {
                if (f) {

                    counter++;
                }
            }
            left[i] = counter;
            i--;
        }
        for (int i = 0; i < n; i++) {
            cout << left[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++) {
            cout << right[i] << " ";
        }
        int index = -1;
        int res = -1;
        for (int i = 0; i < n; i++) {
            int x = left[i] + right[i];
            if (res <= x) {
                res = x;
                if(left[i] && right[i]){

                index =max(index , min(left[i] , right[i]));
                }
                else{
                    index =max(index , max(left[i] , right[i]));
                }
            }
            // res = max(res , min(left[i] , right[i])); 
        }
        return index;
    }
};