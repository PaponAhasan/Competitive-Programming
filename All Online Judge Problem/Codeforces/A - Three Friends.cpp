#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

void difference(ll a,ll b,ll c)
{
    ll sum;
    sum=llabs(a-b) + llabs(a-c) + llabs(c-b);
    cout<<sum<<"\n";
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll ar[3];
        cin>>ar[0]>>ar[1]>>ar[2];
        sort(ar,ar+3);

        set<ll>st;
        st.insert(ar[0]);
        st.insert(ar[1]);
        st.insert(ar[2]);

        ll x,y,z;

        if(st.size()==1)
        {
            cout<<"0"<<"\n";
        }

        else if(st.size()==2)
        {
            if(ar[0]==ar[1]){
                ll l=ar[2];
                --ar[2];

                if(llabs(ar[0]-l)< 2){

                    difference(ar[0],ar[1],ar[2]);
                }
                else{
                    ++ar[0];
                    ++ar[1];

                    difference(ar[0],ar[1],ar[2]);
                }
            }

            else if(ar[1]==ar[2]){
                ll m=ar[0];
                ar[0]++;

                if(abs(ar[1]-m)<2){

                    difference(ar[0],ar[1],ar[2]);
                }
                else{
                    ar[1]--;
                    ar[2]--;

                    difference(ar[0],ar[1],ar[2]);
                }
            }
        }

        else
        {
            ar[0]++;
            if(ar[0]==ar[1]){
                ar[2]--;

                difference(ar[0],ar[1],ar[2]);
            }
            else{
                ar[1]--;
                ar[2]--;

                difference(ar[0],ar[1],ar[2]);
            }
        }

    }

    return 0;
}
