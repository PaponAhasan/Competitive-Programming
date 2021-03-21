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

bool isComposite(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return false;

    if (n%2 == 0 || n%3 == 0)
        return true;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return true;

    return false;
}

int main()
{
    fasrerIO();
    ll n;
    cin>>n;

    if(n%2==0)
    {
        if(n==2)
        {
            cout<<n*3<<" "<<n*2<<"\n";
        }
        else
            cout<<n*2<<" "<<n*1<<"\n";
    }

    else if(n%2)
    {
        for(int i=1; true; i++)
        {
            if(isComposite( n*i))
            {
                if(i%2==0)
                {
                    isComposite( n*i);
                }
                else
                {
                    cout<<n*(i+1)<<" "<<n*i<<"\n";
                    break;
                }
            }
        }

    }
    return 0;
}
