#include <bits/stdc++.h>
using namespace std;
#define LL long long
 
LL Case = 0;
 
int Solve()
{
    string Month1,Month2;
    char C,E;
    LL Day1,Year1,Day2,Year2;
    cin>>Month1>>Day1>>C>>Year1;
    cin>>Month2>>Day2>>E>>Year2;
 
    int Ans = 0;
   
   
    if(Month1 != "January" and Month1 != "February") Year1++;
    if(Month2 == "January" or (Month2 == "February" and Day2<29)) Year2--;
   
    Ans = Year2/4 - (Year1-1)/4;
    Ans-= Year2/100 - (Year1-1)/100;
    Ans+= Year2/400 - (Year1-1)/400;
   
    cout<<"Case "<<++Case<<": ";
    cout<<Ans<<"\n";
}
 
int main()
{
    int Tc;cin>>Tc;
    while(Tc--){
        Solve();
    }
}

/*-------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;
#define LL long long
 
LL Case = 0;
 
int Solve()
{
    string Month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string Month1,Month2;
    char C,E;
    LL Day1,Year1,Day2,Year2;
    cin>>Month1>>Day1>>C>>Year1;
    cin>>Month2>>Day2>>E>>Year2;
 
    int Ans = 0;
    map<string,int>mp;
   
    for(int i=0;i<12;i++) mp[Month[i]]=i;
   
    if(mp[Month1]>1) Year1++;
    if(mp[Month2]==0 or (mp[Month2]==1 and Day2<29)) Year2--;
   
    Ans= Year2/4 - (Year1-1)/4;
    Ans-= Year2/100 - (Year1-1)/100;
    Ans+= Year2/400 - (Year1-1)/400;
   
    cout<<"Case "<<++Case<<": ";
    cout<<Ans<<"\n";
}
 
int main()
{
    int Tc;cin>>Tc;
    while(Tc--){
        Solve();
    }
}
 
 