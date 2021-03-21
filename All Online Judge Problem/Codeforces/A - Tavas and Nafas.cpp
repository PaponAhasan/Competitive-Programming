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

#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;

    string a[10] ={"zero","one","two","three","four","five","six","seven","eight","nine"};
    string b[10] ={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string c[10] ={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

    //if(int i=0;i<n;i++){
        if(n>=0 && n<=9)
            cout<<a[n]<<endl;
        else if(n>=10 && n<=19)
            cout<<b[n%10]<<endl;
        else if(n%10==0)
            cout<<c[n/10]<<endl;
        else cout<<c[n/10]<<"-"<<a[n%10]<<endl;
    //}

    return 0;
}
