// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    
    
    
    
    
    
    
    
    /*This Question is same as other stock buying and Selling Question 
    LINK  : https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/1/*/
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<pair<int,int> >ans;
    int i=0;
    while(i<n){
        for(i;i<n-1 && A[i+1]<=A[i];i++);
        if(i==n-1)
            break;
        int buy = i;
        for(i;i<n-1 && A[i+1]>=A[i];i++);
        int sell = i;
        ans.push_back({buy,sell});
    }
    vector<vector<int>> res ; 
    for(auto x : ans ){
        vector<int> v ;
        v.push_back(x.first) ; 
        v.push_back(x.second) ; 
        res.push_back(v); 
    }
    return res ; 
    }
};

// { Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}

  // } Driver Code Ends