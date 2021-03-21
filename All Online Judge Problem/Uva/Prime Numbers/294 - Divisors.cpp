#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc-->0){
        ll l,h;
        cin>>l>>h;
        ll low=l;
        ll hig=h;

        vector<pair<ll,ll> >v;
        ll div=0LL,mx=0LL,nm=0LL;

        for(ll i=l; i<=h; i++){
            for(ll j=1; j*j<=i; j++){
                if(i%j==0){
                    if(j==i/j) div+=1;
                    else div+=2;
                    nm=i;
                }
            }
            v.push_back(make_pair(div, nm));
            nm=0LL;
            div=0LL;
        }

        //sort(v.begin(),v.end());

        for(ll i=0; i<v.size(); i++){
            mx=max(mx,v[i].first);
            //cout<<v[i].first<<" "<<v[i].second<<"\n";
        }

        for(ll i=0; i<v.size(); i++){
            //mx=max(mx,v[i]first);
            if(mx==v[i].first){
                cout<<"Between "<<low<<" and "<<hig<<", "<<
            v[i].second<<" has a maximum of "<<v[i].first<<" divisors."<<"\n";
                break;
            }
        }
    }
    return 0;
}
