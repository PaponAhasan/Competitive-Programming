/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>S;

        if((S[0]=='o' && S[1]=='n') || (S[0]=='o' && S[2]=='e') || (S[1]=='n' && S[2]=='e'))
        {
            cout<<"1"<<endl;
        }
        else if((S[0]=='t' && S[1]=='w') || (S[0]=='t' && S[2]=='o') || (S[1]=='w' && S[2]=='o'))
            cout<<"2"<<endl;
        else
            cout<<"3"<<endl;
    }
    return 0;
}