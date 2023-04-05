//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
       vector<int> pos; 
       vector<int>neg ; 
       for(int i = 0 ; i< n ; i ++ ){
           if(arr[i] < 0 ){
               neg.push_back(arr[i]); 
               
           }
           else{
               pos.push_back(arr[i]); 
           }
           
       }
       
       reverse(neg.begin() , neg.end()); 
       int i = n-1 ; 
       for(auto x : neg)
       {
           arr[i] = x; 
           i--; 
       }
       reverse(pos.begin()  , pos.end()); 
       for(auto x :pos  ){
           arr[i] = x ; 
           i --; 
       }
       
        
        
        return ; 
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends