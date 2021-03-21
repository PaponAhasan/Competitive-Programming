#include<bits/stdc++.h>
using namespace std;
#define inf 9999999999999999ll

long long  n;
void solve(){
    long long mx=inf;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
           mx=min(mx,(2*i)+(2*(n/i)));
        }
    }
    cout<<mx<<"\n";
}

int main()
{
    cin>>n;
    solve();
    return 0;
}
