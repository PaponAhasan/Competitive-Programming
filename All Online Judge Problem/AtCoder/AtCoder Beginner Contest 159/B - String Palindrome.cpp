#include "bits/stdc++.h"
using namespace std;
#define LL long long

bool Check(string s,LL n){
    string r=s;
    reverse(r.begin(),r.end());
    if(s==r)return true;
    else return false;
}

void solve() {
    string s;
    cin>>s;
    int n=s.size();
    
    if(Check(s,n)){
        string m=s.substr(0,(n-1)/2);
        if(Check(m,m.size())){
            string l=s.substr((((n+3)/2)-1),n-1);
            if(Check(l,l.size())){
                cout<<"Yes"<<"\n";
                return;
            }
        }
    }
    cout<<"No"<<'\n';
}

int main()
{
    solve();
    return 0; 
}
