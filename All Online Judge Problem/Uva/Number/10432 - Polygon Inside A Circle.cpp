#include "bits/stdc++.h"
using namespace std;
typedef long long LL;

void solve()
{
    double r,n;
    while(cin>>r>>n){
        double Phi = 360.0/n;
        double Theta = 180-(90+(Phi/2));
        Theta = (acos(-1)*Theta) /180; //M_PI //Convert Degree angle to Radian to use in code.
        
        double Hight = r*sin(Theta);
        double Base = 2*r*cos(Theta);
        cout<<fixed<<setprecision(3)<<n*((Hight*Base)/2)<<"\n";
    }
}

int main()
{
    solve();
    return 0;
}

