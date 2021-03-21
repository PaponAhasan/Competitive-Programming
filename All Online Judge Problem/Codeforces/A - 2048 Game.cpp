#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int q,num;
    cin>>q;
    while(q--)
    {
        ll n,s1=0;
        cin>>n;
        ll a;
        for(ll i=0;i<n;i++){
            cin>>a;
            if(a<=2048){
                s1=s1+a;
            }
        }

        if(s1>=2048){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
   return 0;
}
