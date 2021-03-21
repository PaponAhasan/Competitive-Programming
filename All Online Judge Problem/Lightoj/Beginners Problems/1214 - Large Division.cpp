#include "bits/stdc++.h"
using namespace std;
#define LL long long
LL Case = 0,i = 0,ok = 0;
 
void solve() {
   string a;
   int b;
   cin>>a>>b;
   if(a[0]=='-') i++;
   while(i<(int)a.length()){
       ok = (ok*10) + (a[i]-'0');
       ok%=b;
       i++;
   }
   cout<<"Case "<<++Case<<": ";
   puts(ok?"not divisible":"divisible");
   i = 0;
   ok = 0;
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