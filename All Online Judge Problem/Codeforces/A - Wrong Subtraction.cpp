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
    ll n,k,nn,ss;
    cin>>n>>k;
    nn=n;
    for(ll i=0;i<k;i++){
          ss=nn%10;
        if(ss>0){
            nn=nn-1;
        }
        else{
            nn=nn/10;
        }
    }
    cout<<nn<<endl;

    return 0;
}
