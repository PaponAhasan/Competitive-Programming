#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    int n,m;
    cin>>n>>m;
    n--;
    m--;
    cout<<n*(n+1)/2 + m*(m+1)/2<<"\n";
}

int main()
{
    solve();
    return 0; 
}
