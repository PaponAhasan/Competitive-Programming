#include<bits/stdc++.h>
using namespace std;

const int sz=20;
long long n,m,q;
string s[sz+5];
string t[sz+5];
string temp;
long long Tm,tn;

void solve(long long ar[]){
    vector<string>vc;
    for(int i=1;i<=q;i++){

        if(ar[i]%n==0)
           Tm=n;

        if(ar[i]%m==0)
           tn=m;

        if(ar[i]%n)
           Tm=ar[i]%n;

        if(ar[i]%m)
          tn=ar[i]%m;

         temp=s[Tm]+t[tn];

        vc.push_back(temp);
    }

    for(auto x:vc){
        cout<<x<<"\n";
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }

     for(int i=1;i<=m;i++){
        cin>>t[i];
    }

    cin>>q;
    long long ar[q];

    for(int i=1;i<=q;i++){
        cin>>ar[i];
    }
    solve(ar);
	return 0;
}
