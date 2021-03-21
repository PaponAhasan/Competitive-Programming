/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include "bits/stdc++.h"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
const double pi = acos(-1.0);

void fasrerIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fasrerIO();
    ll n;
    cin>>n;

    if(n%2==0)
    {
        cout<<6+n<<" "<<"6"<<"\n";
    }

    else if(n%2)
    {
        cout<<9+n<<" "<<"9"<<"\n";
    }
    return 0;
}

