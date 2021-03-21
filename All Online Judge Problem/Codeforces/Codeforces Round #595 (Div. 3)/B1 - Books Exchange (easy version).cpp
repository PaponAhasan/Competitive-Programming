#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 1; i <=n; i++) {
	     cin >> a[i];
     }
     
     int ok,k;
     for(int i=1;i<=n;i++){
           ok=1;
           k=a[i];
         while(true){
             if(i==k) break;
              else {
                  k=a[k];
                  ok++;
              }
         }
          cout<<ok<<" ";
     }
     cout<<"\n";
    
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