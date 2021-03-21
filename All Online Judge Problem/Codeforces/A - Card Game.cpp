#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=101;
int a,b,c,tc,ok;
int fp[N],sp[N];
int fs,ss;
vector<int>vc;
int main() {

    scanf("%d",&tc);

    while(tc-- > 0){
         scanf("%d%d%d",&a,&b,&c);
          fs=0,ss=0;
         for(int i=0;i<b;i++){
             cin>>fp[i];
         }
          for(int i=0;i<c;i++){
             cin>>sp[i];
         }

         int loss=1,win=0,final=0;
         int loss1=1,win1=0,final1=0;

         for(int i=0;i<b;i++){
             for(int j=0;j<c;j++){
                 if(fp[i]<sp[j]){
                     loss=0;
                     break;
                 }
                 else win++;
             }
            if(win==c) final++;
            win=0;
         }

           for(int i=0;i<c;i++){
             for(int j=0;j<b;j++){
                 if(fp[j]>sp[i]){
                     loss1=0;
                     break;
                 }
                 else win1++;
             }
            if(win1==b) final1++;
            win1=0;
         }

         if(final>final1)

          printf("YES\n");
          else printf("NO\n");
          //return 0;
    }

    return 0;
}
