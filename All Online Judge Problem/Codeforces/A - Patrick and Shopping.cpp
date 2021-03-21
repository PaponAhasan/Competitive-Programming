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
    ll d1,d2,d3,dis1,dis2,dis3,dis4;
    cin>>d1>>d2>>d3;

    dis1=(d1*2)+(d2*2);
    dis2=(d1*2)+(d3*2);
    dis3=(d2*2)+(d3*2);
    dis4=d1+d2+d3;

    cout<<min(min(dis1,dis2),min(dis3,dis4))<<endl;

//    if(dis1>dis2)
//        cout<<dis2<<endl;
//    else cout<<dis2<<endl;

    return 0;
}
