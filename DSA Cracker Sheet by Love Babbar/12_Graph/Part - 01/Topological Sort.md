```cpp

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> topo(int N, vector<int> adj[]) {

        // Step 1: Initialize a queue for BFS traversal
        queue<int> q;

        // Step 2: Initialize an array to store indegree of each node
        vector<int> indegree(N, 0);

        // Step 3: Calculate indegrees for all nodes
        for(int i = 0; i < N; i++) {
            for(auto it: adj[i]) {
                indegree[it]++; 
            }
        }
        
        // Step 4: Add nodes with indegree 0 to the queue
        for(int i = 0; i < N; i++) {
            if(indegree[i] == 0) {
                q.push(i); 
            }
        }

        // Step 5: Initialize a vector to store the topological order
        vector<int> topo;

        // Step 6: Perform BFS
        while(!q.empty()) {
            int node = q.front(); 
            q.pop();

            // Step 7: Add the current node to the topological order
            topo.push_back(node);

            // Step 8: Update indegrees of adjacent nodes and enqueue if indegree becomes 0
            for(auto it : adj[node]) {
                indegree[it]--;
                if(indegree[it] == 0) {
                    q.push(it); 
                }
            }
        }

        // Step 9: Return the topological order
        return topo;
    }
};


int main() {

    // Step 10: Define adjacency list
    vector<int> adj[6];
    adj[5].push_back(2);
    adj[5].push_back(0);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[3].push_back(1);
    adj[2].push_back(3);

    // Step 11: Create object of Solution class
    Solution obj;

    // Step 12: Get topological order
    vector<int> v = obj.topo(6, adj);

    // Step 13: Print topological order
    for(auto it : v)
        cout << it << " ";
    
    return 0;
}

```
