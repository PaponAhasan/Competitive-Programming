#include<iostream>
#include<cstdio>
#include<string>
#include<ctype.h>
#include<conio.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include <map>
#include <set>
#include <bitset>
#include <math.h>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main( )
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        string H;

        int i,j,cnt=0;
        cin>>S>>H;

        for(i=0;i<S.length();i++)
        {
            for(j=0;j<H.length();j++)
            {
                if(S[i]==H[j])
                {
                    cnt++;
                }
            }
        }
        if(cnt)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
