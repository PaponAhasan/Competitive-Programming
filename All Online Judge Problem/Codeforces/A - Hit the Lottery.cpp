
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll a,count=0;
    cin>>a;

    while(a!=0)
    {
        if(100<=a)
        {
            a=a-100;
            count++;
        }
        else if(20<=a)
        {
            a=a-20;
            count++;
        }
        else if(10<=a)
        {
            a=a-10;
            count++;
        }
        else if(5<=a)
        {
            a=a-5;
            count++;
        }
        else if(1<=a)
        {
            a=a-1;
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
