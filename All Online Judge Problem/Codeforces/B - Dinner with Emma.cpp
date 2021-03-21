#include "bits/stdc++.h"
using namespace std;
#define LL long long
void solve() {
   int n,m;
   cin>>n>>m;
   int R[n][m];
   int mi,mx=0;
   for(int i=0;i<n;i++){
       mi=1e9;
       for(int j=0;j<m;j++){
           cin>>R[i][j];
           mi=min(mi,R[i][j]);
       }
       mx=max(mi,mx);
   }
   cout<<mx<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	solve();
 	return 0;
}
