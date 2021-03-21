/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c;
    cin>>i>>a>>b>>c;

    int ans1=a-i;
    int ans2=40-(40-(a-b));
    int ans3=40-(40-(c-b));

    cout<<abs(ans1+ans2+ans3)<<endl;
}
