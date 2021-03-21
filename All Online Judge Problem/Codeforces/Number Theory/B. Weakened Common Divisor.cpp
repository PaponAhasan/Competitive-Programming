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

int main() 
{ 
    int n;
    cin>>n;
    LL x[n],y[n];
    for(LL i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    Divisors(x[0]);
    Divisors(y[0]);
    
    for(int i=0;i<sz;i++){
        bool flag=true;
        for(int j=1;j<n;j++){
            if(x[j]%DivList[i]!=0 and y[j]%DivList[i]!=0){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<DivList[i]<<"\n";
            return 0;
        }
    }
    cout<<"-1"<<"\n";
	return 0; 
} 