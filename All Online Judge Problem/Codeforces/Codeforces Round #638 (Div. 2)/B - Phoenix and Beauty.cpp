/*
--> Don't try hack it!!

_/﹋\_
(҂`_´)
<,︻╦╤─҉- - - - - - - - - - - - - - -
_/﹋\_

*/

#include "bits/stdc++.h"
using namespace std;
#define LL long long
int n,k;

void solve() {
    set<int>S;
    cin >> n>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        S.insert(x);
    }
    
    if((int)S.size()>k){
       puts("-1");
       return;
    }
   
    printf("%d\n",n*k);
    for(int i=1;i<=n;i++){
        for(auto x:S) 
        printf("%d ",x);
        for(int j=1;j<=k-(int)S.size();j++) 
        printf("1 ");
    }
    cout<<"\n";
}

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc-->0) {
        solve();
	}
    return 0; 
}