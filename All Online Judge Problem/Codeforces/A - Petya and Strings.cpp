#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
using namespace std;

int main()
{
    char A[100];
    char B[100];

    scanf("%s",A);
    scanf("%s",B);

    int ch1,ch2,sum1=0,sum2=0;

    for(int i = 0; i<strlen(A); i++){
        A[i] = tolower(A[i]);
    }

    for(int i = 0; i<strlen(A); i++){
        B[i] = tolower(B[i]);
    }

    int x=strcmp(A,B);

    if(x>0)
        cout<<"1"<<endl;
    else if(x<0)
        cout<<"-1"<<endl;
    else
        cout<<"0"<<endl;

    return 0;
}
