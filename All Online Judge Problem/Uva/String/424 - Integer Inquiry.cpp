#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t[200];
    memset(t,0,sizeof(t));
    int mx=0,ok=0,r=0,ad=0,j;
    vector<int>v;
    while(1){
        string s;
        cin>>s;

        if(s=="0")
            break;

        int l=s.size();
        if(mx<l)
            mx=max(mx,l);

        int i;
        v.push_back(r);
        r=0;
        for( i=s.size()-1,j=0; i>=0; i--,j++){

            t[j]=(s[i]-'0')+t[j]+r;
            r=0;
            if(t[j]>9){
                r=t[j]/10;
                t[j]=t[j]%10;
            }
        }
        ok=0;
        if(r){
            t[j]=r;
            ok=1;
        }
    }

    for(auto x:v)
        ad+=x;
     t[j]+=ad;

    if(ok){
        for(int i=mx; i>=0; i--)
            cout<<t[i];
    }
    else{
        for(int i=mx-1; i>=0; i--)
            cout<<t[i];
    }
    cout<<"\n";

    return 0;
}


