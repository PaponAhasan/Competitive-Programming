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

int main()
{
    long long x,y,z;
    long long a,b,c;

    cin>>x>>y>>z;
    cin>>a>>b>>c;

    if(x<=a && (a-x)+b>=y && (((a-x)+b)-y)+c>=z)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;

    return 0;
}
