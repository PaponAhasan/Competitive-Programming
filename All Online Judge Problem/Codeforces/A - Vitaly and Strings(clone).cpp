#include "bits/stdc++.h"
using namespace std;

int main()
{
   string S;
    string T;
    cin>>S>>T;
    int c=1,s=0;
    for(int i=S.length()-1; i>=0; i--)
    {
             c=1;

            if(S[i]=='z')
            {
                S[i]=S[i]-25;
                c=0;
            }
            else
            {
                 S[i]++;
//                 if(S[i]>T[i])
//                    S[i]--;

                }

        if(c==1){

            break;
        }
    }

    if(S==T)
        cout<< "No such string"<<endl;

    else
            cout<<S<<endl;

    return 0;
}

