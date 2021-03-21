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
    int h1,m1,h2,m2,h3,m3;
    char c;
    cin>>h1>>c>>m1>>h2>>c>>m2;

    int hour=h1+h2;
    int minite=(m1+m2);

    if(hour%2==0)
    {
        h3=hour/2;
        m3=minite/2;
    }

    else {
        h3=hour/2;
        m3=(minite+60)/2;

        if(m3>59){
            m3=m3-60;
            h3=h3+1;
        }
    }

    if(h3<10 && m3<10)
        cout<<"0"<<h3<<":"<<"0"<<m3<<endl;

    else if(h3<10)
        cout<<"0"<<h3<<":"<<m3<<endl;

    else if(m3<10)
        cout<<h3<<":"<<"0"<<m3<<endl;

    else
        cout<<h3<<":"<<m3;

        return 0;
}

