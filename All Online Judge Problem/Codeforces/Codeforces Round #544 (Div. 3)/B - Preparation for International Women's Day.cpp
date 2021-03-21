#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve(){
   LL n,k;
   cin>>n>>k;
   LL cnt = 0;
   vector<LL>a(k,0);
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       a[x%k]++;
   }
   
   LL Ans = a[0]/2;
   if(k%2==0){
       Ans+=(a[k/2]/2);
   }
   
   for(int i=1;i<(k+1)/2;i++){
       Ans+=min(a[i],a[k-i]);
   }
  cout<<Ans*2<<"\n";
}

int main()
{
    solve();
}