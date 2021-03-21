/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int GCD(int a,int b){
    if(a==0) return b;
    return GCD(b%a,a);
}

int ar[100];
int main()
{
    int tc;
    cin>>tc;
    getchar();
    while(tc--){
        string str;
        getline(cin,str);

        stringstream strm(str);

      int count = 0;
      while (strm >> ar[count])
        count++;

        int g=0;
        for(int i=0;i<count;i++){
            for(int j=i+1;j<count;j++){
                g=max(g,__gcd(ar[i],ar[j]));
            }
        }
        cout<<g<<"\n";
    }
  return 0;
}
