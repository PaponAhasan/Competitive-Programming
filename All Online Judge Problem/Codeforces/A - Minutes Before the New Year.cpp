#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a,b,c,tc;

void New_Year(){
   int day=24*60;
   int hh=a*60;
   int mm=hh+b;
   cout<<day-mm<<"\n";

}

int main() {

    scanf("%d",&tc);

    while(tc-- > 0){
         scanf("%d%d",&a,&b);
         New_Year();
    }

    return 0;
}
