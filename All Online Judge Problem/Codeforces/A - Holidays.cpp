#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;

    if(n%7==6){
        cout<<((n/7)*2)+1<<" "<<((n/7)*2)+2<<endl;
    }

    else if(n%7==0){
        cout<<(n/7)*2<<" "<<(n/7)*2<<endl;
    }
    else if(n%7){
        if(n%7==1)
            cout<<(n/7)*2<<" "<<((n/7)*2)+1<<endl;
        else cout<<(n/7)*2<<" "<<((n/7)*2)+2<<endl;
    }
    return 0;
}
