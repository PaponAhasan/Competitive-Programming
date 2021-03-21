#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;

   // for(int i=1;i<=n;i++){

    if(n%2){
             for(int i=1;i<=n/2;i++){
              cout<<"I hate that ";
              cout<<"I love that ";
          }
          cout<<"I hate it";
       }

     else{
             for(int i=1;i<=n-1;i++){
               if(i%2)
              cout<<"I hate that ";
             else
              cout<<"I love that ";
          }
          cout<<"I love it";
       }

        //if(n%2)
       // cout<<"I hate it";

        //else(n%2==0)
        //cout<<"I love it";

   // }
    return 0;
}
