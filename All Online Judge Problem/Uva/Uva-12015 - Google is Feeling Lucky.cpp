/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int l=1; l<=t; l++)
    {
        char a[100],b[100],c[100],d[100],e[100],f[100],g[100],h[100],i[100],j[100];
        int v[100],max=0;

            cin>>a>>v[0];
            cin>>b>>v[1];
            cin>>b>>v[2];
            cin>>d>>v[3];
            cin>>e>>v[4];
            cin>>f>>v[5];
            cin>>g>>v[6];
            cin>>h>>v[7];
            cin>>i>>v[8];
            cin>>j>>v[9];


        for(int k=0; k<10; k++)
        {
            if(max<v[k])
                max=v[k];
        }

                cout<<"Case #"<<l<<":"<<endl;
                if(max==v[0])
                    cout<<a<<endl;
                if(max==v[1])
                    cout<<b<<endl;
                if(max==v[2])
                    cout<<c<<endl;
                if(max==v[3])
                    cout<<d<<endl;
                if(max==v[4])
                    cout<<e<<endl;
                if(max==v[5])
                    cout<<f<<endl;
                if(max==v[6])
                    cout<<g<<endl;
                if(max==v[7])
                    cout<<h<<endl;
                if(max==v[8])
                    cout<<i<<endl;
                if(max==v[9])
                    cout<<j<<endl;
    }
}