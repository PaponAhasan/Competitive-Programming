#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a,b;
    cin>>a>>b;
    string s;
    set<string>st;
    vector<string>v,vl;
    for(int i=0; i<a; i++){
        cin>>s;
        st.insert(s);
        vl.push_back(s);
        reverse(s.begin(),s.end());
        v.push_back(s);
    }
    vector<string>vc,vk,vf;
    for(int i=0; i<v.size(); i++){
        if(st.find(v[i])!=st.end()){
            vc.push_back(v[i]);
            vk.push_back(vl[i]);
            st.erase(v[i]);
            st.erase(vl[i]);
        }
    }
    vector<string>vz;
    for(int i=0; i<vc.size(); i++){
        if(vc[i]!=vk[i]){
            vz.push_back(vk[i]);
        }
    }
    for(int i=0; i<vc.size(); i++){
        if(vc[i]==vk[i]){
            vz.push_back(vk[i]);
            break;
        }
    }
    for(int i=vc.size()-1; i>=0; i--){
        if(vc[i]!=vk[i]){
            vz.push_back(vc[i]);
        }
    }
    if(vz.size()==0){
        cout<<"0"<<"\n";
    }
    else{
        cout<<vz.size()*b<<"\n";
        for(auto x:vz)
            cout<<x;
            cout<<"\n";
    }
    return 0;
}
