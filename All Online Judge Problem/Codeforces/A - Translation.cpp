#include<stdio.h>
#include<string.h>
int main()
{
    char t[105],s[105];
    while(gets(t)){
        gets(s);

        strrev(s);
        int cmp=strcmp(t,s);
        if(cmp==0)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
