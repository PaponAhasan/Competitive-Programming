#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
      string s;
      cin>>s;
      int sm=0,k=0,evn=0;
      for(int i=0;i<s.size();i++){
          sm+=s[i]-'0';
          if(s[i]=='0')k++;
          if((s[i]-'0')%2==0) evn++;
      }
      if(sm%3==0 && k && evn>=2) cout<<"red"<<"\n";
      else cout<<"cyan"<<"\n";
    }

	return 0;
}
