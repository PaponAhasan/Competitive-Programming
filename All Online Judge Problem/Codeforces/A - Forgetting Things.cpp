#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main()
{
    ll da,db;
    cin>>da>>db;

    if(da==db || db-da==1)
    {
        ll no=da*10;
        ll on=db*10;

        if(no<on){
            no=on-1;
            cout<<no<<" "<<on<<endl;
        }
        else{
            no=no+1;
            on=on+2;
            cout<<no<<" "<<on<<endl;
        }
    }
    else if(da-db==8){
        cout<<"99"<<" "<<"100"<<endl;
    }
    else
        cout<<"-1"<<endl;

    return 0;
}
