#include <bits/stdc++.h>
using namespace std;



/*
----------------------------------------------------------------------------------------------

----
G-1: 
---- 

- Linear and Non-linear
- Definitions and terminology: Node/vertex, Edge
- Types: UG, DG
- Structure: nodes + edge minimal condition for consider as graph, Cyclic-atleast 1, Acyclic
- Path
- Degree: In, Out, total D of G: 2 * E (no. of edges)
- Weight


----
G-2: 
---- 

- Input format 
- representation: 
    (1) adj matrix 
         - consumed more unused space (n^2)
    (2) adj list 
         - SC - - O(2*E)
----------------------------------------------------------------------------------------------
*/




int main() {




/*
------------------------------------------------------------------------------------------
 1 - - adjacency matrix for undirected graph
    SC: O(n^2)


    int N, M;            // N - no. of nodes, M - No. of edges
    cin >> N >> M;

    int adj[N+1][N+1];

    for(int i = 0; i < M; i++) {

        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;  // this statement will be removed in case of directed graph
    }


   Note:

- We can use adj matrix for the smaller value of the no. of nodes 

------------------------------------------------------------------------------------------
*/



// Weighted graph for adj matrix

    int N, M, WT;            // N - no. of nodes, M - No. of edges
    cin >> N >> M >> WT;

    int adjM[N+1][N+1];

    for(int i = 0; i < M; i++) {

        int u, v;
        cin >> u >> v;
        adjM[u][v] = WT;
        adjM[v][u] = WT;  // this statement will be removed in case of directed graph
    }








/*
------------------------------------------
  2 - Adj list


    int N, M;
    cin >> N >> M;

    vector<int> adj[N + 1];

    for(int i=0; i<M; i++) {

        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);  // this statement will be removed in case of directed graph
    }


    adj list for undirected graph
    TC: O(n * 2E)

    adj list for directed graph
    TC: O(n * E)

    adj list for undirected wt graph
    TC: O(n * 2E) + 2E

    adj list for directed wt graph
    TC: O(n * E) + 2E   

------------------------------------------
*/




    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> adj[N + 1];

    for(int i=0; i<M; i++) {

        int u, v, wt;
        cin >> u >> v >> wt;

        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});  // this statement will be removed in case of directed graph
    }



    return 0;

}
