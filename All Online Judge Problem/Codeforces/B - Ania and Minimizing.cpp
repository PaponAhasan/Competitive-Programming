#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;

    cin>>n>>k;
    string d;
    cin>>d;

    if(k==0) {
        cout<<d<<"\n";
        return 0;
    }

    if(n==1){
        cout<<"0"<<"\n";
        return 0;
    }

     if(d[0]!='1'){
        d[0]='1';
        k--;
     }

     int i=1;
     while(k && i<n){
         if(d[i]!='0'){
             d[i]='0';
             k--;
         }
         i++;
     }

  cout<<d;
  cout<<"\n";

    return 0;
}
