#include "bits/stdc++.h"
using namespace std;

int main()
{
    int c1=0,c2=0;
    string s;
    cin>>s;

    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]=='a'){
            c1++;
        }
        else c2++;
    }

    if(c1>c2) cout<<l<<endl;

    else {
        cout<<l-((c2-c1)+1)<<endl;
    }

    return 0;
}

