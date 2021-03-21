#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k,n,w,ans;
    cin>>k>>n>>w;

    ll nb=(w+1)/2;


    if(w%2)
        ans=(w*nb);

    else
        ans=(w/2)*(w+1);

    if((ans*k)>n)
        cout<<(ans*k)-n<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
