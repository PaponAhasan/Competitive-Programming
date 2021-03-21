#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;


int main()
{
    int j=0;
    char S[100];
    char H[100];
    char ch;

    cin>>S;

    for(int i=0; i<strlen(S); i++){

        if(S[i]>=65 && S[i]<=90){
            S[i]=S[i]+32;
        }
    }


     for(int i=0; i<strlen(S); i++){

         if(S[i]=='A' || S[i]=='a' || S[i]=='O' || S[i]=='o'|| S[i]=='Y' || S[i]=='y'
            || S[i]=='E' || S[i]=='e' || S[i]=='U' || S[i]=='u' || S[i]=='I' || S[i]=='i'){
            continue; }

            else cout<<"."<<S[i];

     }

    cout<<endl;
    return 0;

}

