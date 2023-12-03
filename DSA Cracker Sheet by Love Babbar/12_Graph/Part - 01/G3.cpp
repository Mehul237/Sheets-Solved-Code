#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
  
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
         
        // N-size and probably mark everthing as {0}
        int vis[V] = {0};  
        // Initial conf. having 0
        vis[0] = 1;        
        
        queue<int>q;
        q.push(0);   // push the initial starting node
        
        // solution vector
        vector<int>bfs;
        
        // We always took-out everything from the queue till there was something in the queue, like still is just not empty
        while(!q.empty()) {
            
           // get the topmost element in the queue 
            int node = q.front(); 
            q.pop();
          // So this will make sure you always get the node
            bfs.push_back(node);
            
          // Checked out its neighbors nodes, traverse for all its neighbours 
            for(auto it : adj[node]) {
                
                // if the neighbour has previously not been visited, 
                // store in Q and mark as visited 
                
                if(!vis[it]) {
                    vis[it] = 1; 
                    q.push(it); 
                }
            }
            
        }
        return bfs;
    }
};



/*
-----------------------------------------------------------------------------------

TC: O(N) + O(2E) 
    - Where N = Nodes, 2E is for total degrees as we traverse all adjacent nodes

SC: O(3N) ~ O(N) 
    - Space for queue data structure visited array and an adjacency list

-----------------------------------------------------------------------------------
*/





void addEdge(vector <int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}




int main() {


    vector <int> adj[6];
    
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);

    Solution obj;
    vector <int> ans = obj.bfsOfGraph(5, adj);
    printAns(ans);


    return 0;


}
