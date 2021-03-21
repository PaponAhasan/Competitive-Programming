#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<string.h>

using namespace std;

int main()
{
    string S;
    int j=0,len,count=0;

    cin>>S;
    len=S.length();

    sort(S.begin(),S.end());

    int plus1=(len/2);

    for(int i=0 ;i<len; i++)
    {
        if(S[i]!='+'){
            S[j] = S[i];
            j++;
            count++;
        }
         S[j] = '\0';
    }

    int size=len-plus1;

    for(int i=0; i<size; i++)
    {
        if(i==size-1)
            cout<<S[i]<<endl;
        else cout<<S[i]<<"+";
    }

    return 0;

}
