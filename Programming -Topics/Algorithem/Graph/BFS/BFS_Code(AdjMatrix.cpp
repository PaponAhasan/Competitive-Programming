#include <iostream>
#include<queue>
using namespace std;
int visited[100];
int adj[100][100];
int cost[100];
int parant[100];
int nodes, edges;

void dfs(int x) {
	cout << x << " ";
	visited[x] = 1;
	cost[x] = 0;
	queue<int>q;
	q.push(x);
	while (!q.empty()) {
		int m = q.front();
		q.pop();
		for (int i = 1; i <= nodes; i++) {
			if (adj[m][i] == 1 and visited[i]==0) {
				cout << i << " ";
				visited[i] = 1;
				q.push(i);
				cost[i] = cost[m] + 1;
				parant[i] = m;
			}
		}
	}
	cout << "\n";
}
int main()
{
	cin >> nodes >> edges;
	for (int i = 1; i <= edges; i++) {
		int x, y;
		cin >> x >> y;
		adj[x][y] = 1;
	}
	dfs(1);
	cout<<parant[2];
}