#include <cstdio>
 
int main()
{
    char c;
    int t;
    scanf("%d", &t);
    while((c = getchar()) != EOF)
	putchar(c == '9' ? '1' : c);
}