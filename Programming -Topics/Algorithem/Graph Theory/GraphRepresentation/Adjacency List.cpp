// A simple representation of graph using STL 
#include<bits/stdc++.h> 
using namespace std; 
 
void addEdge(vector<int> adj[], int u, int v) 
{ 
	adj[u].push_back(v); 
	adj[v].push_back(u); 
} 

void printGraph(vector<int> adj[], int V) 
{ 
	for (int i = 0; i < V; ++i) 
	{ 
		cout <<"Adjacency list of vertex "<<i<<": "; 
		for (auto x : adj[i]) 
		    cout <<" -> "<<x; 
		printf("\n"); 
	} 
} 

int main() 
{ 
	
	int x, y, nodes, edges;
        cin >> nodes;
        cin >> edges;
        vector<int> adj[nodes];
        for(int i = 0;i < edges;++i)
        {
            cin >> x >> y;
            addEdge(adj, x, y);
        }
        printGraph(adj,nodes); 
	return 0; 
} 

/* Input:
5 7
0 1
0 4
1 2
1 3
1 4
2 3
3 4
*/

5 7
1 2
1 5
2 3
2 4
2 5
3 4
4 5