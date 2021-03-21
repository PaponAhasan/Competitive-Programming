#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    
    long long i=1LL;
    while(n){
        n=n/2;
        i*=2;
    }
    
    cout<<i-1<<"\n";
    return 0;
}
