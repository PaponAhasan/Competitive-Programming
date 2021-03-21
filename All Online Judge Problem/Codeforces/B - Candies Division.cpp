#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,c,tc,ok;

void New_Year(){
   ll ans=a/b; // 4
   ll mod=a%b; // 3
   ll diff=b/2;

   if(diff<=mod)
    ok=(ans*b)+diff;
   else if(mod<diff) ok=(ans*b)+mod;

   cout<<ok<<"\n";

}

int main() {

    scanf("%lld",&tc);

    while(tc-- > 0){
         scanf("%lld%lld",&a,&b);
         if(a%b==0) cout<<a<<"\n";
         else New_Year();
    }

    return 0;
}
