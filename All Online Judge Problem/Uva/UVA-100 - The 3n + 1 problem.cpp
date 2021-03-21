/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include <iostream>
using namespace std;

int main() {
    int a,b;
    while(cin>>a>>b){
        int p=a;
        int q=b;
        int mx=0;
        if(a>b) swap(a,b);
      
        for(int i=a;i<=b;i++){
              int ok=1;
              int n=i;
              
            while(n!=1){
                if(n%2){
                    n=3*n+1;
                }
                else{
                   n/=2; 
                }
                ok++;
            }
           
            if(ok>mx) mx=ok;
        }
      cout<<p<<" "<<q<<" "<<mx<<"\n";
    }
    return 0;
}