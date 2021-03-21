///By Rakibul_Ahasan, contest: Codeforces Round #188 (Div. 2), problem: (A) Even Odds, Accepted, #
#include<iostream>
#include<stdio.h>
#include<string.h>
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
    ll n,k,nn,ans;
    cin>>n>>k;

    nn=ceil((double)n/2);

    if(nn>=k){
        ans=(2*k)-1;
    }
    else {
//            if(n%2==0)
//                ans=(2*k)-n;
//            else ans=(2*k)-(n+1);
            ans=2*(k-nn);
    }

    cout<<ans<<endl;

    return 0;
}
