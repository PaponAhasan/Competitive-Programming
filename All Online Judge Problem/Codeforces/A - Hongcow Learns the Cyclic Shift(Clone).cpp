/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include "bits/stdc++.h"
using namespace std;

int main()
{
    char s[51],k[51];
    //char a[51][51];
    // map<string,int>mp
    set<string>str;
    scanf("%s",s);
    //str.clear();
    // str.insert(s);

    int l=strlen(s);

    for(int j=0; j<l; j++)
    {
        char temp=s[l-1];
        for(int i=l-1; i>=1; i--)
        {
            s[i]=s[i-1];
        }
        s[0]=temp;
        str.insert(s);

    }

    cout<<str.size()<<endl;
    //pf(k);
    return 0;
}
