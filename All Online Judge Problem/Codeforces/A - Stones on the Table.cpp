#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char S[n];

    cin>>S;

    int count=0;
    for(int i=0;i<n;i++){
        if(S[i]==S[i+1])
            count++;
    }

    cout<<count;

    return 0;
}
