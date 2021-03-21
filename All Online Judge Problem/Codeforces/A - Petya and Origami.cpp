#include <bits/stdc++.h>
using namespace std;
#define LL long long

int main() {
    LL n,m;
    cin>>n>>m;
    cout<<((n*2)+m-1)/m+((n*5)+m-1)/m+((n*8)+m-1)/m<<"\n";
    // Or--> cout<<(LL)ceill((double)(n*2)/m)+(LL)ceill((double)(n*5)/m)+(LL)ceill((double)(n*8)/m)<<"\n";
    return 0;
}
