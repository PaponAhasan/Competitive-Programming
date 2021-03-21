#include "bits/stdc++.h"
using namespace std;
#define LL long long
int a[10000];

void solve() {
   int n,i=1;
   while(cin>>n){
      a[i]=n;
      sort(&a[1],&a[i+1]);
       if(i%2){
           cout<<(a[(i/2)+1])<<"\n";
       }
       else{
          cout<<((a[i/2])+(a[(i/2)+1]))/2<<"\n";
       }
       i++;
   }
}

int main()
{
    solve();
    return 0; 
}