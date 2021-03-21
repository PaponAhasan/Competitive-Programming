#include <stdio.h>
#include <string.h>


int main()
{
    int test,i,len1,len2,j,k,x,y,len3,len4;
    char a1[10000],a2[10000],a3[10000],a4[10000],temp;
    scanf("%d",&test);
     getchar();
    for(k=1;k<=test;k++){
                scanf("\n");
        fgets(a1, 104, stdin);
        scanf("\n");
        fgets(a2, 104, stdin);

        len1=strlen(a1);
        len2=strlen(a2);
        x=0;y=0;
        for(i=0;i<len1;i++){
            if(a1[i]>='a'&&a1[i]<='z'){
                a1[i]='A'+(a1[i]-'a');
            }
            }
            for(i=0;i<len1;i++){
                if(a1[i]!=' '){
                    a3[x]=a1[i];
                    x++;
                }
            }
            a3[x]='\0';
        for(i=0;i<len2;i++){
            if(a2[i]>='a'&&a2[i]<='z'){
                a2[i]='A'+(a2[i]-'a');
            }
        }
        for(i=0;i<len2;i++){
            if(a2[i]!=' '){
                a4[y]=a2[i];
                y++;
            }
        }
          a4[y]='\0';
        len3=strlen(a3);
        len4=strlen(a4);

   for(i=0;i<len3-1;i++){
      for(j=0;j<len3-1;j++){
          if(a3[j]>a3[j+1]){
            temp=a3[j];
            a3[j]=a3[j+1];
            a3[j+1]=temp;
          }
    }
   }
    for(i=0;i<len4-1;i++){
      for(j=0;j<len4-1;j++){
          if(a4[j]>a4[j+1]){
            temp=a4[j];
            a4[j]=a4[j+1];
            a4[j+1]=temp;
          }
    }
   }

if(strcmp(a3,a4)==0)
    printf("Case %d: Yes\n",k);
else
    printf("Case %d: No\n",k);



    }
    return 0;
}
