#include "bits/stdc++.h"
using namespace std;
#define LL long long

void Solve(){
    int a,b,c;
    cin>>a>>b;
    if(b>a) swap(a,b);
     b = b*2;
    if(b>a) cout<<b*b<<"\n";
    else cout<<a*a<<"\n";

    
}

int main()
{
    int tc; scanf("%d", &tc);
	while(tc--) {
           Solve();
	}
    return 0; 
}
