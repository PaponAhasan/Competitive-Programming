#include "bits/stdc++.h"
using namespace std;
#define LL long long

int main()
{
    int tc,Case=1;
    scanf("%d", &tc);
    while(tc--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        char x[a][b];
        map<int,int>mp;
        map<int, int>::iterator it;
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                cin>>x[i][j];
                mp[x[i][j]-'A']++;
            }
        }

        int mx=0,cnt=0,sum=0;
        for(it=mp.begin(); it!=mp.end(); it++){
            mx=max(it->second,mx);
            sum+=it->second;
        }
        for(it=mp.begin(); it!=mp.end(); it++){
            if(mx==it->second)
                cnt++;
        }
        cout<<"Case "<<Case++<<": "<<(cnt*mx*c)+((sum-(cnt*mx))*d)<<"\n";
    }
    return 0;
}
