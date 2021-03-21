#include "bits/stdc++.h"
using namespace std;
#define LL long long
 
vector<int>a[100001];
int vis[100001];
 
void dfs(int x){
	vis[x] = 1;
	for(auto i:a[x]){
		if(!vis[i]) dfs(i);
	}
}
 
void solve(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	int cnt = 0;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			dfs(i);
			cnt++;
		}
	}
	cout<<cnt<<"\n";
}
   
int main()
{
	//freopen("in.txt","r",stdin);
	//int tc;cin>>tc;
	//while(tc--)
	solve(); 
    return 0;
}