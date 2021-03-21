#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s,t;
    while(cin>>s>>t){
        string ss="";

        int p=0;
        for(int i=0;i<s.size();i++){
            for(int j=0+p;j<t.size();j++){
                if(s[i]==t[j]){
                  ss.push_back(t[j]);
                  p=j+1;
                  break;
                }
            }
        }

        if(ss==s) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";

 // or logic-->
//        int p=0;
//        for(int i=0;i<t.size() && p<s.size();i++){
//            if(t[i]==s[p]) p++;
//        }
//
//        if(p==s.size()) cout<<"Yes"<<"\n";
//        else cout<<"No"<<"\n";
    }
    return 0;
}
