#include "bits/stdc++.h"
using namespace std;
#define LL long long int

void solve(){
	string a,b,x,y;
	cin>>a>>b;
	
	for(int i=0;i<a.size();i++) if(a[i]!=',')x.push_back(a[i]);
	for(int i=0;i<b.size();i++) if(b[i]!=',')y.push_back(b[i]);
	if(x==y) puts("equal");
	else puts("different");
}
   
int main()
{
	//freopen("in.txt","r",stdin);
	LL tc;cin>>tc;
	while(tc--)
	solve();
	return 0;
}