#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int k=0;
        for(int i=0;i<s.size();i++)
           if((s[i]-'0')%2!=0 and k<2){
               s[k]=s[i];
               k++;
           }
          if(k<2) cout<<"-1"<<"\n";
          else cout<<s[0]<<s[1]<<"\n";
    }
 return 0;
}
