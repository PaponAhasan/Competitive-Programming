#include <bits/stdc++.h>
using namespace std;

int main()
{
   string ans="";
   string s;

   cin>>s;
   if(s!="bubble" && s!="tapioka"){
      ans+=s;
   }

    cin>>s;
   if(s!="bubble" && s!="tapioka"){
       if(ans.size()) ans+=' ';
      ans+=s;
   }

    cin>>s;
   if(s!="bubble" && s!="tapioka"){
       if(ans.size()) ans+=' ';
      ans+=s;
   }

      if(!ans.size()) cout<<"nothing"<<"\n";
      else cout<<ans<<"\n";

	return 0;
}

