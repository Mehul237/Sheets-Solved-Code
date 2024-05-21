## 1. Using BFS: 
- In-degree (Adj matrix)
- Simple BFS traversal

<br>

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

<br>

## 2. Using DFS: 
- Visited Vector: To store visit of each vertex
- Stack: To maintain the topo sort order

```cpp

class Solution {

private:
    void findTopoSort(int node, vector<int>& vis, stack<int>& st, vector<int> adj[]) {
        // Mark the current node as visited
        vis[node] = 1;

        // Traverse all adjacent nodes of the current node
        for (auto it : adj[node]) {
            // If adjacent node is not visited, recursively call findTopoSort for it
            if (!vis[it]) {
                findTopoSort(it, vis, st, adj);
            }
        }
        // After visiting all adjacent nodes, push the current node to the stack
        st.push(node);
    }

public:
    vector<int> topoSort(int N, vector<int> adj[]) {
        stack<int> st;
        vector<int> vis(N, 0);

        // Traverse each node of the graph
        for (int i = 0; i < N; i++) {
            // If the node is not visited, call findTopoSort to perform DFS from this node
            if (vis[i] == 0) {
                findTopoSort(i, vis, st, adj);
            }
        }

        vector<int> topo;

       // Pop elements from the stack to get the topological order
        while (!st.empty()) {
            topo.push_back(st.top());
            st.pop();
        }
        return topo;
    }
};



int main() {

    int N = 6;
    vector<int> adj[5 + 1];

    adj[5].push_back(2);
    adj[5].push_back(0);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);

    Solution obj;
    vector<int> res = obj.topoSort(6, adj);

    cout << "Toposort of the given graph is:" << endl;
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}

```
