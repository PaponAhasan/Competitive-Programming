#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include <map>
#include <set>
#include <bitset>
#include <math.h>
#include <sstream>
#include <stdlib.h>

#define ll long long

using namespace std;

int main()
{
    int n,m;
    bool flag=false;
    //flag=false;
    cin>>n>>m;
    char arr[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='C' || arr[i][j]=='M' || arr[i][j]=='Y'){
                flag=true;
            }
        }
    }

    //cout<<cnt<<endl;
    if(flag){
        cout<<"#Color"<<endl;
    }
    else  cout<<"#Black&White"<<endl;



//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<m; j++)
//        {
//            if(arr[j]='C' || arr[j]=='M' || arr[j]=='Y')
//            {
//                cout<<"#Black&White"<<endl;
//                break;
//            }
//            else
//            {
//                cout<<"#Color"<<endl;
//                break;
//            }
//        }
//        break;
//    }


    return 0;

}
