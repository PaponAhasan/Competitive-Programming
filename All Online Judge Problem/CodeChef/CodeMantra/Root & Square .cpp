#include "bits/stdc++.h"
using namespace std;
#define LL long long int
LL tc,n;
void solve(){
	LL x;
	cin>>x;
	LL sqr = sqrt(x);
	sqr = pow(sqr,2);
	int p = (n*0.01)*x;
	double diff = abs(x-sqr);
	//cout<<sqr<<" "<<diff<<"\n";
	if(diff<=sqr) puts("yes");
	else puts("no");
}
   
int main()
{
	//freopen("in.txt","r",stdin);
	cin>>tc>>n;
	while(tc--)
	solve();
	return 0;
}