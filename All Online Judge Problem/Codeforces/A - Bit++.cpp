#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char ar[4];
    int x=0,n;
    cin>>n;

    while(n--)
    {
        cin>>ar;

        for(int j=0; j<3; j++)
        {

            if(ar[j]=='+')
            {
                x++;
                break;
            }
            else if(ar[j]=='-')
            {
                x--;
                break;
            }
        }
    }

    cout<<x<<endl;
    return 0;
}

