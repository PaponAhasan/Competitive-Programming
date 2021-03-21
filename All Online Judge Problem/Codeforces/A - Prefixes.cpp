///By Rakibul_Ahasan, contest: Codeforces Round #188 (Div. 3), problem: (A) A. Prefixes, Accepted, #
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
    ll n,l,k=2,a,b,cnt1=0,cnt2=0,sum=0;
    cin>>n;
    string s;
    cin>>s;

    //l=strlen(s);

    //a=l-2;
    //b=l-a;
//    for(ll i=0;i<l;i++){
//        if(s[i]=='a')
//            cnt1++;
//        else cnt2++;
//    }

    //cout<<cnt1<<endl;
    //cout<<cnt2<<endl;

//    if(cnt1==cnt2){
//        cout<<"0"<<endl;
//        cout<<s<<endl;
//    }
//    else {
    for(ll i=0; i<n; i=i+2)
    {
        if(s[i]==s[i+1])
        {
            s[i]='a';
            s[i+1]='b';
            sum++;
        }
        //if(s[i]=='a'  && s[i+1]=='a'){
//                s[i]='b';
//                sum++;
//            }
//            else if(s[i]=='b' && s[i+1]=='b'){
//                    s[i]='a';
//                    sum++;
//            }
    }
    cout<<sum<<endl;
    cout<<s<<endl;
    // }

    return 0;
}
