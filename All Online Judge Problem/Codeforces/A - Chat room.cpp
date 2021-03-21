#include<stdio.h>
#include<string.h>

char S[100];
int j=0,cnt=0;

int main( )
{
    scanf("%s",S);

    char H[ ]= {"hello"};
    int l=strlen(H);

    for(int i=0; i<strlen(S); i++ )
    {
        if(S[i]==H[j])
        {
            //i++;
            j++;
            cnt++;
        }

    }

//     printf("%d\n",j);      ///ahhellllloou   /// hello  //helhcludoo
//     printf("%d\n",l);
    if(cnt==l)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

