#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
int const mx=105;
int dx[] = {0, 0, 1, -1, 1,-1,1,-1};
int dy[] = {1, -1, 0, 0, 1,-1,-1,1};
string in[mx];
int out[mx][mx];
int r,c,x,y,Case=1;

bool isSafe(int x, int y){
    if(x<0||y<0||x>=r||y>=c) return false;
    return true;
}

void solve()
{
    bool BLANK=false;
    while(cin>>r>>c and r and c)
    {
       getchar();
        for(int i=0; i<r; i++){
            cin>>in[i];
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++) out[i][j]=0;
        }

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++) {
                if(in[i][j]=='*'){
                    for(int k=0;k<8;k++){
                        x= i+dx[k];
                        y = j+dy[k];
                        if(isSafe(x,y))out[x][y] +=1;
                    }
                }
            }
        }
        
        if(BLANK)printf("\n");
        cout<<"Field #"<<Case++<<":"<<"\n";
        for(int i=0; i<r; i++){
            for(int j=0;j<c;j++){
                if(in[i][j]=='*')cout<<"*";
                else cout<<out[i][j];
            }
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
