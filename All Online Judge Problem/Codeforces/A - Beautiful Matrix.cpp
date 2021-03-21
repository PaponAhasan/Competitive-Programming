#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
    	//freopen("in.txt", "r", stdin);
    	//freopen("out.txt", "w", stdout);

    int ar[10][10];
    int s1,s2;

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>ar[i][j];
        }
    }

           for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(ar[i][j]==1){
                s1=abs(i-3);
                s2=abs(j-3);
            }
        }
    }

    cout<<s1+s2<<endl;

    return 0;

}
