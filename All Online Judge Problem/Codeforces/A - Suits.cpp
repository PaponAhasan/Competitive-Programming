/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include "bits/stdc++.h"
using namespace std;

const int M=2e6+20,P=1e6;
int c[M];

#define ConPnt(a)  {for(auto it: a){cout<<it<<", ";}cout<<endl;}
#define MapPnt(a)  {for(auto it: a){cout<<it.first<<": "<<it.second<<", ";}cout<<endl;}

#define precision(a) cout << fixed << setprecision(a)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define MAX_SIZE 100100
#define mod 1000000007
#define endl "\n"

#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define Sort(v)  sort(v.begin(),v.end())

#define mem(a,d) memset(a,d,sizeof(a))
#define LL long long
#define ULL unsigned long long
#define dd double
#define PI 2*acos(0.0)

#define ln puts("")

typedef unsigned long long ull;
typedef long long ll;
const double pi = acos(-1.0);

#define newl(i,n) cout<<((i == n-1) ? "\n" : " ");

void fasrerIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fasrerIO();

    int tt,ss,vv,jj,c_tj,c_svj;
    int s1,s2;
    cin>>tt>>ss>>vv>>jj>>c_tj>>c_svj;

    if(c_tj<c_svj){
       int mn= min(min(ss,vv),jj);
       s1=mn*c_svj;
       jj=jj-mn;

       int m=min(jj,tt);
       s2=m*c_tj;

       cout<<s1+s2<<"\n";
    }

    else {

       int m=min(jj,tt);
       jj=jj-m;
       s2=m*c_tj;

       int mn= min(min(ss,vv),jj);
       s1=mn*c_svj;

       cout<<s1+s2<<"\n";

    }
    return 0;
}
