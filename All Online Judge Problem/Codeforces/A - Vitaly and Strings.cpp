#include "bits/stdc++.h"
using namespace std;

int main()
{
    char S[105];
    char T[105];
    scanf("%s %s",S,T);
    int l=strlen(S)-1;
    int c=1;
    for(int i=l;i>=0; i--)
    {
        c=1;
        S[i]++;
        if(S[i]>'z'){
            S[i]='a';
            c=0;
        }
        if(c) {
            break;
        }
    }

    if(strcmp(S,T)==0)
        cout<< "No such string"<<endl;
        else cout<<S<<endl;

    return 0;
}
