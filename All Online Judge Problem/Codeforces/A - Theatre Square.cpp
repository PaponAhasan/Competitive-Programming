#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long x,y,a,r1,r2;
    cin>>x>>y>>a;

    if(x%a==0)
        r1=x/a;
    else r1=(x/a)+1;

    if(y%a==0)
        r2=y/a;
    else r2=(y/a)+1;

    cout<<r1*r2<<endl;
    return 0;
}
