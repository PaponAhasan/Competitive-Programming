#include<stdio.h>
#include<math.h>

int main()
{
    int x,y;
    double a,b;

    scanf("%d%d",&x,&y);
        a=y*log(x);
        b=x*log(y);
        if(a>b){
            printf(">\n");
        }
        else if(a<b){
            printf("<\n");
        }
        else{
            printf("=\n");
        }
    return 0;
}
