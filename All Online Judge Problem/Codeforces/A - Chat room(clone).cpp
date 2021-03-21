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

string S;
string H= "hello";

int l=H.length();
int i=0,j=0,cnt=0;

int main( )
{
    cin>>S;

    while(i<S.length())
    {
        if(S[i]==H[j])
        {
            j++;
            cnt++;
        }

        i++;
    }

//     printf("%d\n",j);      ///ahhellllloou   /// hello  //helhcludoo
//     printf("%d\n",l);
    if(cnt==l)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

