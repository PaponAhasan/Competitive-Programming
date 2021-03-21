#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{

//	freopen("in.txt", "r", stdin);
//	freopen("out.txt", "w", stdout);

    char S[100];

    scanf("%s", S);

    int i=0, j=0;
    int l = strlen(S);

    int arr_size=((l+1)/2)+1;
    char A[arr_size];

    while(S[i]!='\0'){

        if(S[i]<='3' && S[i]>='1'){

            A[j] = S[i];
            i++;
            j++;
        }
        else
            i++;
    }


    l = strlen(A);
    sort(A, A+j);

    for(int i=0; i<j; i++){
        if(i==j-1)
            cout<<A[i]<<endl;
        else
            cout<<A[i]<<"+";
    }

    return 0;

}
