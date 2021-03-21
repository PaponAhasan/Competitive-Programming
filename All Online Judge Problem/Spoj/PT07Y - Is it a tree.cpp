#include "bits/stdc++.h"
using namespace std;
#define LL long long

vector<int>a[10001];
int vis[10001];
int dis[10001];
int parent[10001];

void dfs(int x){
	vis[x] = 1;
	for(auto i:a[x]){ 
		if(!vis[i]){
			dfs(i);
		}
	}
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
	int cnt = 0;
	for(int i=1;i<=m;i++)
	    if(!vis[i])
	         dfs(i),cnt++;
	 if(cnt==1 and m==n-1) 	puts("YES");
	 else puts("NO");    
}
 
int main()
{
	//freopen("in.txt","r",stdin);
	solve(); 
    return 0;
}	