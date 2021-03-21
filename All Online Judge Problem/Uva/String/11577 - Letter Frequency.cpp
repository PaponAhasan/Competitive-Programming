
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    int tc,max,freq[26];
    char a[205];
    
    scanf("%d",&tc);
    getchar();
    for(int i=0;i<tc;i++)
    {
        for(int j=0;j<26;j++) freq[j]=0;
        gets(a);
        max=0;
        for(int j=0;j<strlen(a);j++)
        {
            if(a[j]>='a' && a[j]<='z')
            {
                freq[a[j]-'a']++;
                if(max<freq[a[j]-'a']) max=freq[a[j]-'a'];
            }
            else if(a[j]>='A' && a[j]<='Z')
            {
                freq[a[j]-'A']++;
                if(max<freq[a[j]-'A']) max=freq[a[j]-'A'];
            }
        }
        
        for(int j=0;j<26;j++)
        {
            if(freq[j]==max) printf("%c",'a'+j);
            
        }
        printf("\n");
    }
    return 0;

}