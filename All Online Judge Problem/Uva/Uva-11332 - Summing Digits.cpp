/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void sum_digits(ll n)
{
    ll rem,sum=0,s;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        s=sum;
    }
    if(s/10==0) cout<<s<<endl;
    //if(sum>9)
    //sum_digits(sum);
    else return sum_digits(s);
}

int main()
{
    ll n,nn;
    while(scanf("%lld",&n)!=EOF && n!=0){

        sum_digits(n);
    }
    return 0;
}