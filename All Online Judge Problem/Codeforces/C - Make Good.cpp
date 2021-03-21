#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long T,n,s,m,x;
    scanf("%lld", &T);

    while(T--)
    {
        s=x=0;
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
            cin>>m;
            s=s+m;
            x^=m;
        }

        if(s==2*x) {
            cout<<"0"<<"\n\n";
            continue;
    }
    cout<<2<<"\n"<<x<<" "<<x+s<<"\n";
    }
    return 0;
}
