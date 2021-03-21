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

#define ll long long

using namespace std;

int main()
{
    ll n,r,N,count=0;
    cin>>n;

    N=n;

    while(N!=0)
    {
        r=N%10;
        N=N/10;
        //count1++;
        if(r==4 || r==7)
        {
            //count2++;
            count++;
        }
    }

    if(count==4 || count==7 || count==47 || count==74 || count==444 || count==777 || count==447 || count==477 || count==774||
       count==744 || count==747 || count==474)
       cout<<"YES"<<endl;

//    if(count1==count2)
//        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

