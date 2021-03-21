/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include<iostream>
#include<algorithm>

using namespace std;

int GCD(int a,int b){
    if(a==0) return b;
    return GCD(b%a,a);
}

int main()
{
    int N;
    while(cin>>N && N>0){
    int G=0;
     for(int i=1;i<N;i++)
        for(int j=i+1;j<=N;j++){
             // G+=__gcd(i,j);
              G+=GCD(i,j);
            }
            cout<<G<<"\n";
    }
  return 0;
}
