#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=101;
int a,b,c,tc;
int fp[N],sp[N];

int main() {

    scanf("%d",&tc);

    while(tc-- > 0){
        int mxf=0;
        int mxs=0;
         scanf("%d%d%d",&a,&b,&c);

         for(int i=0;i<b;i++){
             cin>>fp[i];
             if(fp[i]>mxf)
                 mxf=max(mxf,fp[i]);

         }

          for(int i=0;i<c;i++){
             cin>>sp[i];
             mxs=max(mxs,sp[i]);
         }

         if(mxf>mxs)
          printf("YES\n");
          else printf("NO\n");
    }

    return 0;
}
