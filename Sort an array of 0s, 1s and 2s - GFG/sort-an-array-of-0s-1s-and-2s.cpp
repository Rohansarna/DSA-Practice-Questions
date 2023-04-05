//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int c_zero = 0 , c_one = 0 , c_two = 0  ; 
        for(int i = 0 ; i < n ; i++){
            if(a[i] == 0 ){
                c_zero += 1; 
            }
            else if(a[i] == 1){
                c_one += 1; 
            }
            else{
                c_two += 1; 
            }
            
        }         
        int i = 0 ; 
            while(c_zero != 0 && i < n  ){
                a[i] = 0 ; 
                i++ ; 
                c_zero-- ; 
            }
            while(c_one  != 0 && i < n  ){
                a[i] = 1 ; 
                
                c_one --; 
                i++ ; 
            }
            while(c_two  != 0 && i < n  ){
                a[i] = 2 ; 
                i++ ; 
                c_two -- ; 
            }
        
        
        
        
        
        
        
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends