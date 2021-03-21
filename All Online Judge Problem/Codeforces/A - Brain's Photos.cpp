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
    int n,m,cnt=0;
    cin>>n>>m;
    char arr[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='W' || arr[i][j]=='G' || arr[i][j]=='B'){
                cnt++;
            }
        }
    }

    //cout<<cnt<<endl;
    if(cnt==n*m){
        cout<<"#Black&White"<<endl;
    }
    else  cout<<"#Color"<<endl;



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
