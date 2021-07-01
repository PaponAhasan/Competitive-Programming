#include<bits/stdc++.h>
using namespace std;

vector<int>adj[1000];
int vis[10000];

bool dfs(int node,int parent){
	vis[node] = 1;
	for(int child : adj[node]){
		if(vis[child]==0){
			if(dfs(child,node)==true)
			   return true;
		}
		else
		  if(child!=parent)
		      return true;
	}
	return false;
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
	if(dfs(1,0)) puts("YES");
	else puts("NO");
}
 
int main()
{
	//freopen("in.txt","r",stdin);
	solve(); 
    return 0;
}	
