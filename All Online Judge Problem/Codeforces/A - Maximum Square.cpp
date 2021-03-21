#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int arr[1000];

    int n;
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>> arr[i];
    }
    sort(arr,arr+n);

    for(int i=0,m=n;i<n;i++,m--){
        if(m-arr[i]<=0){
            cout<<m<<endl;
            break;
        }
    }

    }
    return 0;
}
