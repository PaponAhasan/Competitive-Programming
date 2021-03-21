#include "bits/stdc++.h"
using namespace std;
#define LL long long
LL n,k,i,l;
void solve() {
    cin>>n>>k;
    l=0;
    for(i=1;i<=n;i++){
        if((i*(i+1LL))/2LL >= k) break;
        l=(i*(i+1LL))/2LL;
    }
    string Ans(n,'a');
    LL x=n-i-1LL;
    LL y=n-(k-l);
    Ans[x]=Ans[y]='b';
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