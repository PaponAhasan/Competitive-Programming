#include "bits/stdc++.h"
using namespace std;
#define LL long long

const int N = 10000;
vector<int>adj[N];
vector<int>vis(N);
int dis[N];
vector<int>prime;

bool isValid(int x,int y){
	int cnt = 0;
	while(x>0){
		if(x%10 != y%10) cnt++;
		x/=10,y/=10;
	}
	if(cnt == 1) return true;
	else return false;
}

bool Prime(int n){
	if(n%2==0) return false;
	for(int i = 3;i*i<=n;i++)
	   if(n%i==0) return false;
	 return true;  
}

void bildGraph(){
	for(int i = 1000;i<=9999;i++){
		if(Prime(i)) prime.push_back(i);
	}
	for(int i = 0;i<prime.size();i++){
		for(int j = i+1;j<prime.size();j++){
			int x = prime[i];
			int y = prime[j];
			if(isValid(x,y)){
				adj[x].push_back(y);
				adj[y].push_back(x);
			}
		}
	}
}

void bfs(int n)
{
	queue <int> q;
	vis[n] = true;
	q.push(n);
	dis[n] = 0;
	while(!q.empty())
	{
		int v = q.front();
		q.pop();
		for(int u : adj[v])
		{
			if(!vis[u])
			{
				dis[u] = dis[v] + 1;
				vis[u] = true;
				q.push(u);
			}
		}
	}
}

int main()
{
	//freopen("in.txt","r",stdin);
	int tc;cin>>tc;
	bildGraph();
	while(tc--){
		int a,b;
		cin>>a>>b;
		for(int i = 1000;i<=9999;i++){
			dis[i] = -1;
			vis[i] = 0;
		}
		bfs(a);
		if(dis[b] == -1) puts("Impossible");
		else printf("%d\n",dis[b]);
	}
    return 0; 
}