#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main()
{
    int n,c1=0,c2=0;
    cin>>n;
    string str;

    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='z'){
            c1++;
        }
        if(str[i]=='n'){
            c2++;
        }
    }

    for(int i=0;i<c2;i++){
        cout<<"1 ";
    }

    for(int i=0;i<c1;i++){
        cout<<"0 ";
    }
    cout<<endl;

    return 0;
}

