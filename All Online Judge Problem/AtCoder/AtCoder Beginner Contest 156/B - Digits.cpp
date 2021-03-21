#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
   LL n,k;
   cin>>n>>k;
   
   LL ok=0LL;
   while(n!=0){
       n/=k;
       ok++;
   }
   cout<<ok<<"\n";
}
  
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	solve();
 	return 0; 
}
