#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vc;

int main()
{
    int n;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++){
        cin>>ar[i];
        vc.push_back(make_pair(ar[i],i+1));

    }

    sort(&ar[0],&ar[n]);
    sort(vc.begin(),vc.end());

    int sum=1;
    for(int i=n-2,j=1;i>=0;i--,j++){
        sum+=((ar[i]*j)+1);
    }

    cout<<sum<<"\n";

     for(int i=n-1;i>=0;i--){
       cout<<vc[i].second<<" ";
    }
    return 0;
}
