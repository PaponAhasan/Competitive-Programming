/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){

        char s[10][100];
        int ar[100];
        int max=0;

        for(int j=0;j<10;j++){
            cin>>s[j];
            cin>>ar[j];

            if(max<ar[j]){
                max=ar[j];
            }
        }

        cout<<"Case #"<<i<<":"<<endl;

        for(int j=0;j<10;j++){
            if(max==ar[j]){
                cout<<s[j]<<endl;
            }
        }
    }
    return 0;
}