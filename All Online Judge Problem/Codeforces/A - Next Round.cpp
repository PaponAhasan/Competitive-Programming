#include<iostream>
using namespace std;

int main()
{
    int ar[50],n,k,sum=0;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<n;i++){
        if(ar[i]>=ar[k-1] && ar[i]>0){
            sum++;
        }
    }
    cout<<sum<<endl;

    return 0;
}
