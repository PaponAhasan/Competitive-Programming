#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
int const mx=105;
string x[mx];

void solve()
{
    int r,c,Case=1;
    bool BLANK=false;
    while(cin>>r>>c and r and c)
    {
        for(int i=0; i<r; i++){
            cin>>x[i];
        }

        int sum=0,ck=0;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++) {
                if(x[i][j]=='.'){
                    if(j-1>=0 and x[i][j-1]=='*') sum++;
                    if(j+1<c and x[i][j+1]=='*') sum++;
                    if(i-1>=0 and x[i-1][j]=='*') sum++;
                    if(i+1<r and x[i+1][j]=='*') sum++;
                    if(i-1>=0 and j-1>=0 and x[i-1][j-1]=='*') sum++;
                    if(i+1<r and j+1<c and x[i+1][j+1]=='*') sum++;
                    if(i-1>=0 and j+1<c and x[i-1][j+1]=='*') sum++;
                    if(i+1<r and j-1>=0 and x[i+1][j-1]=='*') sum++;
                    ck++;
                }
                if(ck) x[i][j]=sum+'0';
                ck=sum=0;
            }
        }
        if(BLANK)printf("\n");
        cout<<"Field #"<<Case++<<":"<<"\n";
        for(int i=0; i<r; i++){
            cout<<x[i];
            cout<<"\n";
        }
       BLANK=true;
    }
}

int main()
{
    solve();
    return 0;
}
