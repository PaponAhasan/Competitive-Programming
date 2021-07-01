#include<bits/stdc++.h>
using namespace std;

vector<int>adj[10000];
int vis[10000];
int IN[10000];
int Out[10000];
int time = 1;

bool dfs(int node){
	vis[node] = 1;
	IN[node] = time++;
	for(int child : adj[node]){
		if(vis[child]==0)
		  dfs(child);
	}
	Out[node] = time++;
}

void solve(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs(1);
}
 
int main()
{
	//freopen("in.txt","r",stdin);
	solve(); 
    return 0;
}	
