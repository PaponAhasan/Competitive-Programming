#include<bits/stdc++.h>
using namespace std;
#define Pi acos(-1)

int main() 
{
   string str[]={"","","2","3","322","5","53","7","7222","7332"};
   string Ans={""};
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       char ch;
       cin>>ch;
       if(ch=='2') Ans+=str[2];
       if(ch=='3') Ans+=str[3];
       if(ch=='4') Ans+=str[4];
       if(ch=='5') Ans+=str[5];
       if(ch=='6') Ans+=str[6];
       if(ch=='7') Ans+=str[7];
       if(ch=='8') Ans+=str[8];
       if(ch=='9') Ans+=str[9];
   }
   sort(Ans.begin(),Ans.end());
   reverse(Ans.begin(),Ans.end());
   cout<<Ans<<"\n";
   return 0; 
} 
