#include "bits/stdc++.h"
using namespace std;
#define LL long long

void join() {
     LL x,y,z;
     cin>>x>>y>>z;
     
     LL d=z-x-y;
     
     if(4*x*y < d*d and d > 0) cout<<"Yes"<<"\n";
     else cout<<"No"<<"\n";
}

int main()
{
    join();
    return 0; 
}

va + vb < vc 
= (va + vb)^2 < c
= (va)^2 + 2vavb + (vb)^2 < c
= a+ 2vab + b < c
= 2vab < c - a - b
= 4ab < c - a - b