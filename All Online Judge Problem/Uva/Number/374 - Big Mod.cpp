#include<bits/stdc++.h>
using namespace std;

long long int bigmod( long long int a, long long int p, long long int M ) { // finds a ^ p MOD M
    long long int res = 1, x = a;
    while( p ) {
        if( p & 1 ) res = (res * x) % M;
        x = (x * x) % M;
        p >>= 1;
    }
    return res;
}

int main()
{
    long long int B,p,n;
    while (cin>>B>>p>>n){
        cout<<bigmod(B,p,n)<<"\n";
    }
    return 0;
}
