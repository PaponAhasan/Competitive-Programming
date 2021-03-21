#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define MXN 10000
#define MOD 10000007
LL memo[MXN],a, b, c, d, e, f;
 
LL fn( LL n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
   
    if(memo[n] != -1) return memo[n];
   
    memo[n] = (fn(n-1)+ fn(n-2) + fn(n-3) + fn(n-4)+ fn(n-5) + fn(n-6))% MOD;
    return memo[n];
}
 
void fill(){
    for(LL i=0;i<=MXN+5;i++){
        memo[i] = -1;
    }
}
 
int main() {
    //freopen("in.txt","r",stdin);
    LL n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- ) {
        fill();
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", ++caseno, fn(n) % MOD);
    }
    return 0;
}