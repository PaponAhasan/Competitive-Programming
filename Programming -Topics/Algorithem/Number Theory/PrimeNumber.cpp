#include <bits/stdc++.h> 
using namespace std;
#define LL long long
LL DivList[150000];
int sz=0;
 
void Divisors(LL n){
    for(LL i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0)
             n/=i;
             DivList[sz++]=i;
        }
    }
    if(n>1) DivList[sz++]=n;
}

int main(){

   Divisors(14);
   for(int i=0;i<sz;i++){
       cout<<DivList[i]<<" ";
   }
}