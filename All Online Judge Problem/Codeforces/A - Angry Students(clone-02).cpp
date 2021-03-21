#include<bits/stdc++.h>
using namespace std;

int tc;
int k;
int ans,Fls;
char str[101];
vector<int>vc;

int main()
{
    cin>>tc;
    while(tc--){
        cin>>k;
        cin>>str;

        ans=0;
      while(true){
          Fls=1;
       for(int i=0;i<k-1;i++){
           if(str[i]=='A' && str[i+1]=='P'){
               str[i+1]='A';
               i++;
               Fls=0;
           }
       }
       if(Fls) break;
       ans++;
      }
      cout<<ans<<"\n";
    }
	return 0;
}
