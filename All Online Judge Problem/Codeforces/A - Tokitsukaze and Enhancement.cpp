#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int r=n%4;
    if(r==1){
        cout<<"0"<<" "<<"A"<<"\n";
    }
    else if(r==0){
         cout<<"1"<<" "<<"A"<<"\n";
    }
    else if(r==2){
         cout<<"1"<<" "<<"B"<<"\n";
    }
    else if(r==3){
         cout<<"2"<<" "<<"A"<<"\n";
    }
    return 0;
}

