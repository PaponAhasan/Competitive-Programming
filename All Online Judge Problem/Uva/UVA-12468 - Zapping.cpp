#include<bits/stdc++.h>
using namespace std;
int main()
{
      int a,b,up,down;

       while(scanf("%d%d",&a,&b)==2){
           if(a==-1 && b==-1) break;

           if(a>b) swap(a,b);

            up=b-a;
            down=(100-b)+(a-0);

           if(a==0) down=100-b;
           cout<<min(up,down)<<"\n";
       }
    return 0;
}
