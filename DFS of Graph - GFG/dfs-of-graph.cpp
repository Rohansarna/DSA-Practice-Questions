//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>res ;
        int visited[V] = {0}; 
        int start = 0 ; 
        visited[0] =1;
        func(start , adj , visited , res); 
        return res ;
    }
    private: 
    void func(int start, vector<int> adj[] ,int visited[] ,  vector<int>&ls )  {
        visited[start] = 1; 
        ls.push_back(start);
        for(auto it : adj[start] ){
            if(!visited[it]){
                func(it , adj , visited , ls ); 
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends