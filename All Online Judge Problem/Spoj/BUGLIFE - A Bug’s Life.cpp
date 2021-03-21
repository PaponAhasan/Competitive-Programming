#include "bits/stdc++.h"
using namespace std;
#define LL long long
 
vector<int>a[100001];
int vis[100001];
int color[100001];
int Case = 0;
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
	for(int i=1;i<=n;i++) vis[i]=0,a[i].clear();
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	bool flag = true;
	for(int i=1;i<=n;i++)
	  if(!vis[i])
	     if(dfs(i,0)==false) 
		    flag = false;
	cout<<"Scenario #"<<++Case<<":"<<"\n";   
	if(flag) puts("No suspicious bugs found!");
	else puts("Suspicious bugs found!"); 
}
   
int main()
{
	//freopen("in.txt","r",stdin);
	int tc;cin>>tc;
	while(tc--)
	solve(); 
    return 0;
}