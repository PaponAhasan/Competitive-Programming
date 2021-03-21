#include "bits/stdc++.h"
using namespace std;
#define LL long long

bool Check(string s,LL n){
    string r=s;
    reverse(r.begin(),r.end());
    if(s==r)return true;
    else return false;
}

void join() {
    string s;
    cin>>s;
    LL n=s.size();
    if(Check(s,n)){
        cout<<s<<'\n';
        return;
    }
    
    LL i,j,ok=0LL;
    for( i=0LL,j=n-1LL; ;i++,j--){
        if(s[i]!=s[j]){
            break;
        }
        ok++;
    }
    
    string str="";
    string s1,s2;
    str+=s.substr(0LL,ok);
    string m=str;

    LL l;
    for(l=s.size()-(ok*2);l>0LL;l--){
         s1=s.substr(ok,l);
        if(Check(s1,s1.size())){
           break;
        }
    }
    reverse(s.begin()+ok,s.begin()+s.size()-ok);
    for(l=s.size()-(ok*2);l>0LL;l--){
         s2=s.substr(ok,l);
        if(Check(s2,s2.size())){
           break;
        }
    }
    (s1.size()>=s2.size())? str+=s1:str+=s2;
    
    reverse(m.begin(),m.end());
    str+=m;
    cout<<str<<'\n';
}

int main()
{
    LL tc;
    cin>>tc;
    while(tc--){
	 join();
    }
    return 0LL; 
}