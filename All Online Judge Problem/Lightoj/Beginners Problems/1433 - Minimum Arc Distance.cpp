#include<bits/stdc++.h>

using namespace std;

//#define pi acos(-1)

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){

        int O1,O2,A1,A2,B1,B2;
        double R1,R2,R3,Q,R,S;
        cin>>O1>>O2>>A1>>A2>>B1>>B2;

        R1=sqrt(((O1-A1)*(O1-A1))+((O2-A2)*(O2-A2)));
        R2=sqrt(((O1-B1)*(O1-B1))+((O2-B2)*(O2-B2)));
        R3=sqrt(((B1-A1)*(B1-A1))+((B2-A2)*(B2-A2)));

        Q=acos(((R2*R2)+(R1*R1)-(R3*R3))/(2.0*R1*R2));

        //R=sqrt(((A1-O1)*(A1-O1))+((A2-O2)*(A2-O2)));
        S=R2*Q;
        //cout<<"Case "<<i<<": "<<S<<endl;
        printf("Case %d: %lf\n",i,S);

    }
    return 0;

}

