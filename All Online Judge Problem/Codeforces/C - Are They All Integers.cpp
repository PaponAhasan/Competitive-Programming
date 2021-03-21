#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    long long A[n];
    for(int i=0; i<n; i++)
        cin>>A[i];

    long double fi;
    long long int IN;
    bool in=false;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++){
            if(i==j) continue;

            for(int k=0; k<n; k++){

                if(i==k || j==k) continue;
                IN=(A[i]-A[j])/A[k];
                fi=(A[i]-A[j])/(double)A[k];

                if(IN==fi)
                    in=true;
                else{
                    in=false;
                    break;
                }
            }
            if(!in)
                break;
        }
        if(!in)
            break;
    }

    if(in)
        cout<<"yes"<<"\n";
    else
        cout<<"no"<<"\n";
    return 0;
}
