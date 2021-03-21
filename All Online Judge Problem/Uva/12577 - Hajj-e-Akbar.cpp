#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
     int C=0;
    while(cin>>s && s!="*"){
        if(s=="Hajj")
            cout<<"Case "<<++C<<": "<<"Hajj-e-Akbar"<<"\n";
        else cout<<"Case "<<++C<<": "<<"Hajj-e-Asghar"<<"\n";
    }
    return 0;
}

