#include "bits/stdc++.h"
using namespace std;
#define LL long long
 
vector<int>a[100001];
int vis[100001];
int dis[100001];
 
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
	int n;
	cin>>n;
	for(int i=1;i<n;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	dfs(1,0);
	
	int q;
	cin>>q;
	int mn = 1e6,Ans = 0,x;
	for(int i=0;i<q;i++){
		cin>>x;
		if(dis[x]<mn) mn = dis[x],Ans = x;
		else 
		 if(dis[x]==mn and x<Ans) Ans = x; 
	}
	cout<<Ans<<"\n";
}
   
int main()
{
	//freopen("in.txt","r",stdin);
	//int tc;cin>>tc;
	//while(tc--)
	solve(); 
    return 0;
}