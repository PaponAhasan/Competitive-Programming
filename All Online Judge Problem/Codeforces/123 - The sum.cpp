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
   int first=1;
    int second=1;
    int k,fibo,i=0,sum=0;
    cin>>k;

    while(i<k){

        sum=sum+first;
        fibo=first+second;
        first=second;
        second=fibo;
        i++;
    }

    cout<<sum<<endl;

    return 0;
}
