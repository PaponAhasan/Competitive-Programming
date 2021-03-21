#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    cin>>a>>b;

    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int ok=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]==b[i]) {
            ok++;
        }
        else break;
    }
    cout<<((a.size()+b.size())-ok)-ok;

    return 0;
}
