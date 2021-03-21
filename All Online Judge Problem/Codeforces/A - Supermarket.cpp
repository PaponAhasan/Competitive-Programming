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
#include <iomanip>

using namespace std;

int main()
{
//    double n,m,a,b,min,ans;
//    cin>>n>>m;
//
//    for(int i=0;i<n;i++){
//        cin>>a>>b;
//
//         ans=(a*m)/b;
//
//         min=ans;
//        if(min>=ans)
//            min=ans;
//    }
//    //printf("%0.8lf\n",min);
//    cout<<setprecision(8)<<min<<endl;

    int n, m;
    cin>>n>>m;

    double a[n], b[n],c[n];

    for(int i=0; i< n; i++){
        cin>>a[i]>>b[i];
    }

    for(int i=0; i< n; i++){
        c[i]=(a[i]*m)/b[i];
    }

    sort(c,c+n);

    printf("%0.8f\n", c[0]) ;
    //cout<<setprecision(8)<<c[0]<<endl;

    return 0;

}
