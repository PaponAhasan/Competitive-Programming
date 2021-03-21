#include <bits/stdc++.h>
using namespace std;

const long long M=100000;
long long n,m,ok,ans;
long long work[M];

void Case(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>work[i];
    }
}

void solve(){
   ans=0;
   ok=1;
   for(int i=0;i<m;i++){
           if(work[i]>=ok){
               ans+=(work[i]-ok);
           }
           else if(ok>work[i]){
               ans+=((n-ok)+work[i]);
           }
           ok=work[i];
       }

     cout<<ans;
}

int main() {
    Case();
    solve();
    return 0;
}
