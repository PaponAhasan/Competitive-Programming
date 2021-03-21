#include <bits/stdc++.h>
using namespace std;
#include<stdio.h>

int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<i<<n/i<<"\n";
            break;
        }
    }

 return 0;
}