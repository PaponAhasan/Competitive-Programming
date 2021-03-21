#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {

        printf("Case %d:\n",i);
        ll n,sum=0;
        cin>>n;
        for(ll j=0; j<n; j++)
        {
            ll nn;
            char s[n];
            cin>>s;
            if(strcmp(s,"donate")==0)
            {
                cin>>nn;
                sum=sum+nn;
            }
            if(strcmp(s,"report")==0)
            {
                cout<<sum<<endl;
            }
        }
    }
    return 0;

}

