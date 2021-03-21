#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--){
        string a,b,c;
        cin>>a>>b>>c;
        int ok=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=c[i] && b[i]!=c[i]){
                ok++;
                break;
            }
        }
        if(ok) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
	return 0;
}
