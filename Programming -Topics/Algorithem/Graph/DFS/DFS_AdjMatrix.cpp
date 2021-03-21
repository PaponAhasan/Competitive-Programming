#include <iostream>
using namespace std;
int Adj[100][100];
int visited[100];
int Parent[100];
int cost[100];
int nodes, edges;

void dfs(int u) {
	if (visited[u] == 0) {
		visited[u] = 1;
		cout << u << " ";
		for (int i = 1; i <= nodes; i++) {
			if (Adj[u][i] == 1 and visited[i] == 0) {
				dfs(i);
			}
		}
	}
}

int main()
{
	cin >> nodes >> edges;
	for (int i = 0; i < edges; i++) {
		int x, y;
		cin >> x >> y;
		Adj[x][y] = 1;
	}
	dfs(1);
}