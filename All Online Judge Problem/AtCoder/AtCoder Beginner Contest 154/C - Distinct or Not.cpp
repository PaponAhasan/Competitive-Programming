#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    
    sort(&ar[0],&ar[n]);
    
     for(int i=0;i<n-1;i++){
        if(ar[i]==ar[i+1]){
            cout<<"NO"<<"\n";
            return 0;
        }
    }
    cout<<"YES"<<"\n";
    return 0;
}
