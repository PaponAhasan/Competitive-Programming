#include "bits/stdc++.h"
using namespace std;
#define LL long long

void join() {
    long long x,y;
    cin>>x>>y;
    if(x==1 or y==1) cout<<"1";
    else cout<<(x*y+1)/2;
}

int main()
{
    scanf("%d", &tc);
    join();
    return 0; 
}
