#include "bits/stdc++.h"
using namespace std;
#define LL long long

vector<int>a[10001];
int vis[10001];
int dis[10001];

void dfs(int x,int d){
	vis[x] = 1;
	dis[x] = d;
	for(auto i:a[x]){ 
		if(!vis[i]){
			dfs(i,dis[x] + 1);
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
	dfs(1,0);
	
	cout<<dis[2]<<"\n";
}
//6 5
//1 2
//1 3
//1 4
//2 5
//2 6 
int main()
{
	solve(); 
    return 0;
}	