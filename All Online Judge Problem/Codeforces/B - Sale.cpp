#include<iostream>
#include<algorithm>
using namespace std;

#define ar_size 1000
int n,m,sum=0;
int ar[ar_size];

int main()
{
    cin>>n>>m;

    for(int i=0; i<n; i++){
        cin>>ar[i];
    }

    sort(ar,ar+n);

    for(int i=0; i<m; i++){
        if(ar[i]<0){
            sum=sum+ar[i];
        }
    }

    sum=(-1)*sum;

    cout<<sum<<endl;

    return 0;

}

