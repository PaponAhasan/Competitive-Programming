#include "bits/stdc++.h"
using namespace std;
#define LL long long


void Solve(){
   LL A,L;
   LL Case = 0LL;
   while(cin>>A>>L and A>=0 and L>=0){
       LL Ans = 1,x = A;
       while(x>1){
           if(x%2) x = (3*x) + 1;
           else x = x/2;
           if(x>L) break;
           Ans++;
       }
       cout<<"Case "<<++Case<<": A = "<<A<<", limit = "<<L<<", number of terms = "<<Ans<<"\n";
   }
}

int main()
{
    Solve();
    return 0; 
}