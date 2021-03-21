#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<string.h>

using namespace std;

int main()
{
    string S;
    cin>>S;

    for(int i=0;i<S.length();i++){
        if(S[i]>=97 && S[i]<=122)
            S[0]=toupper(S[0]);
    }

    cout<<S;

    return 0;
}
