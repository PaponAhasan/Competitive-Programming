#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
vector<int> adj[N];
int Dis[N];
int Parent[N];
vector<bool> vis(N);

void bfs(int n)
{
	printf("%d ",n);
	queue <int> q;
	vis[n] = true;
	q.push(n);
	Dis[n] = 0;
	while(!q.empty())
	{
		int v = q.front();
		q.pop();
		for(int u : adj[v])
		{
			if(!vis[u])
			{
				Dis[u] = Dis[v] + 1;
				Parent[u] = v;
				vis[u] = true;
				q.push(u);
				printf("%d ",u);
			}
		}
	}
	printf("\n");
}

int main()
{
    freopen("in.txt","r",stdin);
	int node,edge;
	scanf("%d %d",&node,&edge);
	for(int i = 0; i<edge; i++)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bfs(1);
	printf("%d\n",Dis[3]);
	printf("%d\n",Parent[2]);
	
	printf("Path is : ");
	int j = 3,n;
	do{
		printf("%d ",j);
		n = j;
		j = Parent[n];
	}while(n!=1);
    return 0;
}