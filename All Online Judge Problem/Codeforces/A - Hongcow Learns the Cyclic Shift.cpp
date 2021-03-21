/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include "bits/stdc++.h"
using namespace std;

#define precision(a) cout << fixed << setprecision(a)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define MAX_SIZE 100100
#define mod 1000000007

#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))

#define pb push_back
#define mk make_pair
#define Sort(v)  sort(v.begin(),v.end())

#define FILL(a,d) memset(a,d,sizeof(a))
#define LL long long
#define ULL unsigned long long
#define dd double
#define PI 2*acos(0.0)

#define ln puts("")

#define fr(i,a,n) for(int i=a;i<n;i++)
#define fr1(i,a,n) for(int i=a;i<=n;i++)
#define frl(i,a,n) for(LL i=a;i<n;i++)


typedef unsigned long long ull;
typedef long long ll;
const double pi = acos(-1.0);

char uplowch(char ch){if(ch >= 'A' &&  ch <= 'Z') ch += 32; return ch;}
char lowupch(char ch){if(ch >= 'a' &&  ch <= 'z') ch -= 32; return ch;}
bool isalpha(char ch){if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) return true; return false;}

// INPUT

void sf(int &x){scanf("%d",&x);}
void sf(LL &x){scanf("%lld",&x);}
void sf(LL &x,LL &y){scanf("lld",&x,&y);}
void sf(float &x){scanf("%f",&x);}
void sf(double &x){scanf("%lf",&x);}
void sf(int &x,int &y){scanf("d",&x,&y);}
void sf(float &x,float &y){scanf("f",&x,&y);}
void sf(double &x,double &y){scanf("lf",&x,&y);}
void sf(double &x,double &y,double &z){scanf("lf%lf",&x,&y,&z);}
void sf(int &x,int &y,int &z){scanf("d%d",&x,&y,&z);}
void sf(LL &x,LL &y,LL &z){scanf("lld%lld",&x,&y,&z);}
void sf(float &x,float &y,float &z){scanf("f%f",&x,&y,&z);}
void sf(char &x){x=getchar();}
void sf(char *s){scanf("%s",s);}
void sf(string &s){cin>>s;}

// OUTPUT

void pf(int x) {printf("%d\n",x);}
void pf(int x,int y) {printf("%d %d\n",x,y);}
void pf(int x,int y,int z) {printf("%d %d %d\n",x,y,z);}
void pf(LL x) {printf("%lld\n",x);}
void pf(LL x,LL y) {printf("%lld %lld\n",x,y);}
void pf(LL x,LL y,LL z) {printf("%lld %lld %lld\n",x,y,z);}
void pf(float x) {printf("%f\n",x);}
void pf(double x) {printf("%.9lf\n",x);}
void pf(double x,double y) {printf("%.5lf %.5lf\n",x,y);}
void pf(char x) {printf("%c\n",x);}
void pf(char *x) {printf("%s\n",x);}
void pf(string x) {cout<<x; ln; }

int main()
{
    char s[51],k[51];
    //char a[51][51];
    // map<string,int>mp
    set<string>str;
    sf(s);
    //str.clear();
    str.insert(s);

    int l=strlen(s);
    int m=0,o=0;

    while(o!=l-1)
    {
        int i=l-1;
        k[m]=s[i];

        for(int j=0,m=1; j<l-1; j++,m++){
            k[m]=s[j];
        }

        for(int n=0; n<l; ++n){
            s[n]=k[n];
        }
        k[l]='\0';

        str.insert(k);

        o++;
    }
    cout<<str.size()<<endl;
    //pf(k);
    return 0;
}
