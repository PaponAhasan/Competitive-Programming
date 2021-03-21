#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,Case=0;
    cin>>t;
    while(t--)
    {
        int yp,lp,s1,s2;
        Case++;
        cin>>yp>>lp;
        s1=abs((lp-yp)*4);
        s2=(yp-0)*4;
        int sum=s1+s2+19;
        cout<<"Case "<<Case<<": "<<sum<<endl;
    }
}

