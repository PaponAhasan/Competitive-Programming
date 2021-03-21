#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
using namespace std;

int main()
{
    string str;
    int one=0,zero=0;
    cin>>str;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='1'){
            one++;
            zero=0;
            if(one==7){
                break;
            }
        }
        else{
            zero++;
            one=0;
            if(zero==7){
                break;
            }
        }

    }

    if(one==7 || zero==7){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}
