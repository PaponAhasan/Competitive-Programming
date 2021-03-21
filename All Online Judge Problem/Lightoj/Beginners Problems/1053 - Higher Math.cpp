#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a[3];
        //long long a,b,c;
        cin>>a[0]>>a[1]>>a[2];

        sort(a,a+3);

        int ans=sqrt((a[0]*a[0])+(a[1]*a[1]));  ///square(c)=square(a)+square(b)

        if(ans==(a[2]))
            cout<<"Case "<<i<<": "<<"yes"<<endl;
        else cout<<"Case "<<i<<": "<<"no"<<endl;
    }
        return 0;
}

