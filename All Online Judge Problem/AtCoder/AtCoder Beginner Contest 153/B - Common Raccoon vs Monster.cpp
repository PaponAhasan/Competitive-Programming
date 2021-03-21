#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long h,n;
    cin>>h>>n;
    
    long long s=0LL;
    for(long long i=0;i<n;i++){
        long long x;
        cin>>x;
        s+=x;
    }
    
    if(s>=h) cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";
    
    //cout<<ceil((double)h/n)<<"\n";
    return 0;
}
