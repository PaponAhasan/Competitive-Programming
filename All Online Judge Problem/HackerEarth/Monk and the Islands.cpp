#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
vector<int> adj[N];
int Dis[N];
vector<bool> vis(N);
int node,edge;

void bfs(int n)
{
	for(int i = 1;i<=node;i++) Dis[i] = 0;
	for(int i = 1;i<=node;i++) vis[i] = false;
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
				vis[u] = true;
				q.push(u);
			}
		}
	}
}
int main()
{
	int tc;cin>>tc;
	while(tc--){
	    scanf("%d %d",&node,&edge);
		for(int i = 1; i<=node; i++)
	    {
		     adj[i].clear();
	    }
	    for(int i = 1; i<=edge; i++)
	    {
		    int u,v;
		    scanf("%d%d",&u,&v);
		    adj[u].push_back(v);
		    adj[v].push_back(u);
	    }
	     bfs(1);
	     cout<<Dis[node]<<"\n";
	}
    return 0;
}