#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,cnt=0,e=0;
    cin>>a>>b;

    if(a*2<b)
        cout<<a<<endl;
    else if(a>b*2)
        cout<<b<<endl;
    else
        cout<<(a+b)/3<<endl;
    return 0;
}
