#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    LL n;
    cin >> n;
    
    LL s=0LL,i=1LL,ok=0LL,j=1LL;
    while(true){
       s+=i;
       if(n%s==0LL and ok){
           cout<<n/s<<"\n";
           break;
       }
       ok++;
       i=pow(2,j);
       j++;
    } 
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