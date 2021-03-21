#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>vc;
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n-1;i++){
        string tm=str.substr(i,2);
        vc.push_back(tm);
    }

    string Tstr;
    int ok=0,mx=0;
    if(vc.size()==1){
        cout<<vc[0]<<"\n";
      return 0;
    }

    for(int i=0;i<vc.size()-1;i++){
        for(int j=i+1;j<vc.size();j++){
            if(vc[i]==vc[j]){
                ok++;
            }
        }
         if(mx<=ok){
            mx=ok;
            Tstr=vc[i];
          }
            ok=0;
    }
        cout<<Tstr<<"\n";
        return 0;
}
