#include<iostream>
#include<cstdio>
#include<string>
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

using namespace std;

int main()
{
    int n;
    cin>>n;
    int M[n];

    for(int i=0; i<n; i++)
    {
        cin>>M[i];
    }

    if(n==1)
    {
        for(int i=0; i<n; i++)
        {
            if(M[n-1]!=15 && M[n-1]!=0)
            {
                cout<<"-1"<<endl;
                break;
            }
            else if(M[n-1]==15)
            {
                cout<<"DOWN"<<endl;
                break;
            }
            else
            {
                cout<<"UP"<<endl;
                break;
            }
        }
    }

    else
    {
        for(int i=0; i<n; i++)
        {
            //int N=n-1;
//            if(M[N++]==15 && M[n-1]>M[n-2])
//            {
//                cout<<"UP"<<endl;
//                break;
//            }
            if( M[n-1]< M[n-2] && M[n-1]!=0 || M[n-1]==15 )
            {
                cout<<"DOWN"<<endl;
                break;
            }
            else
            {
                cout<<"UP"<<endl;
                break;
            }
        }
    }

    return 0;


}
