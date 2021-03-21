/*
_/﹋\_
(҂`_´)
<,︻╦╤─҉- - - - - - - - - - - - - - -
_/﹋\_

*/

#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    int n;
    cin >> n;
    int sum=0,m=0;
    for(int i=n/2;true;i++){
        if(m==n/2)break;
        sum+=pow(2,i);
        m++;
    }
    
    int sm=0,nn=0;
    for(int i=1;true;i++){
        if(nn==((n/2)-1))break;
        sm+=pow(2,i);
        nn++;
    }
    sm+=pow(2,n);
    cout<<abs(sm-sum)<<"\n";
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