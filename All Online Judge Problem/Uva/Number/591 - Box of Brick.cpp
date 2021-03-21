#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,set=1;
    while(cin>>n and n>0){
        int s=0;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            s+=ar[i];
        }

        cout<<"Set #"<<set++<<"\n";
        int move=0;
        for(int i=0;i<n;i++){
            if(ar[i]>s/n)
               move+=ar[i]-(s/n);
        }
        cout<<"The minimum number of moves is "<<move<<"."<<"\n";
        cout<<"\n";
    }
    return 0;
}
