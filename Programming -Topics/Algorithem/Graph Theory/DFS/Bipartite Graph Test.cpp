#include "bits/stdc++.h"
using namespace std;
#define LL long long

vector<int>a[10001];
int vis[10001];
int dis[10001];
int parent[10001];
int color[10001];

bool dfs(int x,int c){
	vis[x] = 1;
	color[x] = c;
	for(auto i:a[x]){ 
		if(!vis[i]){
			if(dfs(i,c^1)==false) return false;
		} 
	   else 
	     if(color[i]==color[x]) return false;	
	}
	return true;
}

void solve(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
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