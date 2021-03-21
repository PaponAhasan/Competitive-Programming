#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
   int n,m;
   cin>>n>>m;
   if(n<10){
       cout<<(100*(10-n))+m;
       return ;
   }
   cout<<m<<"\n";
}
  
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	solve();
 	return 0; 
}
