#include <bits/stdc++.h>
using namespace std;

int n;
int length(){
    int sum=0,ok=0;

    for(int i=1;i<=n;i++){
        sum=sum+(i*(i+1))/2;
        if(sum>n){
            break;
        }
        ok++;
    }

   return ok;
}

int main() {
    cin>>n;

    cout<<length()<<"\n";
    return 0;
}
