#include "bits/stdc++.h"
using namespace std;
#define LL long long
LL Case = 0;
 
void solve() {
   LL n;
   cin>>n;
   
   LL Ans = 0LL;
   for (LL i = 31LL; i >= 0LL; i--) {
       LL k = n >> i;
       if (k & 1)
            Ans++;
    }
    cout<<"Case "<<++Case<<": ";
    puts(Ans&1?"odd":"even");
}
 
int main()
{
    int tc;cin>>tc;
    while(tc--)
    solve();
    return 0;
}