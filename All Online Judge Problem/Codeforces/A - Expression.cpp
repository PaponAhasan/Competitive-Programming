#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int m1=(a+b)*c;
    int m2=a*(b+c);
    int m3=a+b+c;
    int m4=a*b*c;
    //int m5=a*b+c;
    //int m6=a+b*c;

    int MAX=max(max(m1,m2),max(m3,m4));
    cout<<MAX<<endl;
    return 0;
}
