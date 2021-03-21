#include<bits/stdc++.h>
using namespace std;

int tc;
int k;
int mx,ok;
char str[101];
vector<int>vc;

int main()
{
    cin>>tc;
    while(tc--){
        cin>>k;
        cin>>str;

        mx=0;
        for(int i=0;i<k;i++){
            ok=0;
            if(str[i]=='A'){
                for(int j=i+1;j<k;j++){
                    if(str[j]=='P'){
                        ok++;
                    }
                    else break;
                }
            }
           mx=max(mx,ok);
        }
        cout<<mx<<"\n";
    }
	return 0;
}

