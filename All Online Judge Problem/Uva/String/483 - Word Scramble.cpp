#include <bits/stdc++.h>
using namespace std;
#include<stdio.h>

int main(){
    
string s;
while(getline(cin,s)){
    vector<int>v;
    v.push_back(0);
    for(int i=0;i<s.size();i++){
        if(s[i]==' ') v.push_back(i+1);
    }
    v.push_back(s.size()+1);
    
    for(int i=0;i<v.size()-1;i++){
        string str = s.substr(v[i],(v[i+1]-v[i]-1));
        reverse(str.begin(),str.end());
        cout<<str;
        (v.size()-2==i)?cout<<"\n":cout<<" ";
    }
}
 return 0;
}