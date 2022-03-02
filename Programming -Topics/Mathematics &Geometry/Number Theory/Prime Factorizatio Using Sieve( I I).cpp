#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define MaxN 100000
bool IsPrime[MaxN+5];
int Prime[MaxN+5];
int sz,psz;
int Fac[100];

void  Sieve(){
   sz=0;
   for(LL i=0;i<=MaxN;i++) IsPrime[i]=true;
   IsPrime[0]=IsPrime[1]=false;
   for(LL i=2;i<=MaxN;i++){
       if(IsPrime[i]==true){
           for(int j=i+i;j<=MaxN;j+=i){
               IsPrime[j]=false;
           }
       }
   }
   for(int i=1;i<=MaxN;i++){
        if(IsPrime[i]){
            Prime[sz++]=i;
        }
    }
}

void PrimeFactorization(int x) 
{
    psz=0;
    for(int i=0;Prime[i]*Prime[i]<=x,i<sz;i++){
        while(x%Prime[i]==0){
           Fac[psz++]=Prime[i];
           x/=Prime[i];
        }
        if(IsPrime[x]==true){
            Fac[psz++]=x;
            break;
        }
    }
} 

int main(int argc, char const *argv[]) 
{ 
    Sieve();
    int n;
    cin>>n;
    PrimeFactorization(n);
    for (int i=0; i<psz; i++) 
        cout << Fac[i] << " ";
    cout << endl; 
    return 0; 
} 