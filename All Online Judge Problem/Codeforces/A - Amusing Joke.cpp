#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    int freq[26];
    //map<string,int>mp;
    memset(freq,0,sizeof(freq));
    for(int i=0;i<a.size();i++){
       // mp[a[i]]++;
       freq[a[i]-'A']++;
    }
    for(int i=0;i<b.size();i++){
        //mp[b[i]]++;
        freq[b[i]-'A']++;
    }
     for(int i=0;i<c.size();i++){
       // mp[c[i]]--;
       freq[c[i]-'A']--;
    }
    for(int i=0;i<26;i++){
       if(freq[i]!=0){
         cout<<"NO"<<"\n";
         return 0;
       }
    }
    cout<<"YES"<<"\n";
//   for(auto it=mp.begin();it!=mp.end();it++){
//       if(it->second!=0){
//          cout<<"NO"<<"\n";
//          return 0;
//         }
//       }
//       cout<<"YES"<<"\n";
    return 0;
}
