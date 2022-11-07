// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

static bool comp(val t1 , val t2){
    return t2.second >  t1.second ;
}
/*You are required to complete this method*/
int maxChainLen(struct val p[],int n)
{
    sort(p , p + n , comp); 
    // for(int i = 0 ; i< n ; i++){
    //     cout<<p[i].first<<" "; 
    // }
int dp[n+1]; 
fill(dp , dp + n + 1 , 1 ); 

for(int i = 1;  i < n ; i++){
    for(int j = 0 ; j < i ; j++){
        if(p[i].first > p[j].second ){
            dp[i] = max(dp[i] , dp[j] + 1);  
        }
    }
}
int res =1 ;
for(int i = 0  ;i < n ; i++){
    res = max(res , dp[i]); 
}
return res ; 

}