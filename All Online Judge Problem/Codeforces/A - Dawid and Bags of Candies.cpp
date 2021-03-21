#include<iostream>
#include<cstdio>
#include<string>
#include<ctype.h>
#include<conio.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include <map>
#include <set>
#include <bitset>
#include <math.h>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=max(max(a,b),max(c,d));

    int sum=a+b+c+d;

    if(ans==(sum-ans)){
        cout<<"YES"<<endl;
    }

    else
    {
        int x=a+b;
        int y=a+c;
        int z=a+d;
        int m=b+c;
        int n=b+d;
        int o=c+d;

        //if(x==y || x==z || x==m || x==n || x==o || y==z || y==m || y==n ||y==o || z==m || z==n || z==o || m==n || m==o || n==o)
        if(y==n || m==z || x==o )
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
