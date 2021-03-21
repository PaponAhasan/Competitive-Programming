/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        int l=S.length();

            if(S.compare("1")==0 || S.compare("4")==0 || S.compare("78")==0){
                cout<<"+"<<endl;
            }
            else if(S[l-1]=='5' && S[l-2]=='3'){
                cout<<"-"<<endl;
            }
            else if(S[0]=='9' && S[l-1]=='4'){
                cout<<"*"<<endl;
            }
            else if(S[0]=='1' && S[1]=='9' && S[2]=='0'){
                cout<<"?"<<endl;
            }
            else {cout<<"+"<<endl;
                }

    }