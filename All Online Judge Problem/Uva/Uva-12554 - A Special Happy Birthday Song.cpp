/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string HBU[]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    string people[110];

    int n,p=1,j=0,k=0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>people[i];
    }
     if(n>16)
     p=ceil(n/16)+1;
     //else p=1;

    for(int i=0;i<16*p;i++,j++,k++){
        if(k==16)
            k=0;
        if(j==n){
           j=0;
        }
        cout<<people[j]<<": "<<HBU[k]<<endl;
    }
    return 0;
}