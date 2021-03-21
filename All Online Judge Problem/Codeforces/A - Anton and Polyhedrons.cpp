#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll n,sum=0;
    cin>>n;
    char str[n];
    for(ll i=0; i<n; i++)
    {
        cin>>str;
        if(strcmp(str,"Tetrahedron")==0)
            sum=sum+4;
        else if(strcmp(str,"Cube")==0)
            sum=sum+6;
        else if(strcmp(str,"Octahedron")==0)
            sum=sum+8;
        else if(strcmp(str,"Dodecahedron")==0)
            sum=sum+12;
        else if(strcmp(str,"Icosahedron")==0)
            sum=sum+20;
    }
    cout<<sum<<endl;
    return 0;
}
