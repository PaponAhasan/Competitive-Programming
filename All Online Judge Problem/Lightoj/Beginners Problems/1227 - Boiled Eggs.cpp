#include "bits/stdc++.h"
using namespace std;
#define LL long long
int Case = 0;
 
void solve() {
   int N,P,Q;
   cin>>N>>P>>Q;
   vector<int>Gm(N);
   for(auto &x:Gm)cin>>x;
   sort(Gm.begin(),Gm.end());
   int Carry = 0,Ans = 0;
   cout<<"Case "<<++Case<<": ";
   for(int i=0;i<min(N,P);i++){
       if(Carry+Gm[i]>Q) break;
       Carry+=Gm[i];
       Ans++;
   }
   cout<<Ans<<"\n";
}
 
int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        solve();
    }
    return 0;
}