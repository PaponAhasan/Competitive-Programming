#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
set<char>st;

void fasrerIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fasrerIO();
    ll C=0,n,a,b;
    string str;
    while(cin>>str>>n){
        cout<<"Case "<<++C<<":"<<"\n";
        ll i=0;
        while(i<n){
              cin>>a>>b;
              if(a>b) swap(a,b);

              for(ll i=a;i<=b;i++){
                 st.insert(str[i]);
              }

              if(st.size()==1)
                cout<<"Yes"<<"\n";
              else cout<<"No"<<"\n";

              st.clear();
            i++;
        }
    }
}
