#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==2)
    printf("NO");
    else
    {
        if(a%2==0)
        printf("YES");
        else
        printf("NO");
    }
    return 0;
}
