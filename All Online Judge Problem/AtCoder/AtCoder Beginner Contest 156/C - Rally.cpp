#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
   int n;
   cin>>n;
   int ar[n];
   int sum=0,sm=0;
   set<int>st;
    int p=0;
   for(int i=0;i<n;i++){
       cin>>ar[i];
       p+=ar[i];
   }
  
   int m=(p+n-1)/n; 
   int q=p/n; 
   for(int i=0;i<n;i++){
       sum+=pow((ar[i]-m),2);
       sm+=pow((ar[i]-q),2);
   }
   cout<<min(sum,sm)<<"\n";
}
  
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	solve();
 	return 0; 
}
