#include <bits/stdc++.h>
using namespace std;

int add_digits(int);

int main()
{
    int n, result=0;

    scanf("%d", &n);

    for(int i=n; i<=100000; i++)
    {
        int a=i;
        while(a>0)
        {
            result=result+(a%10);
            a=a/10;
        }
        if(result%4==0){
            cout<<i<<endl;s
            break;
        }
        result=0;
    }
    return 0;
}

