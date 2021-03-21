/*
'বিসমিল্লাহির রাহমানির রাহিম'
Bismillah Rahman Rahim
بسم الله الرحمان الرحيم

_/﹋\_
(҂`_´)
<,︻╦╤─҉- - - - - - - - - - - - - - -
_/﹋\_
Don't Try To Hack It!!
*/

#include "bits/stdc++.h"
using namespace std;
#define LL long long
int a[100010];
char s[100010];
long long cnt[26][26];
long long tot[26];
const int maxn = 400010;
const int logn = 19;
vector <int> v[maxn];
set<int>st;
list<int>li;
map<string,int>mp;
pair<int,int>p;
bool mark[maxn];
int d[maxn];
int n, k;

ifstream r("data.in");
ofstream w("data.out");

inline int readint()
{
    int res = 0;
    char c = 0;
    while(!isdigit(c))
        c = getchar();
    while(isdigit(c))
        res = res*10+c-'0', c = getchar();
    return res; 
}

template<typename T>
void output_vector(const vector<T> &v, bool add_one = false, int start = -1, int end = -1) {
    if (start < 0) start = 0;
    if (end < 0) end = v.size();
 
    for (int i = start; i < end; i++)
        cout << v[i] + (add_one ? 1 : 0) << (i < end - 1 ? ' ' : '\n');
}

void Solve(){
	LL a,b,c;
	a = readint();
	LL Ans = 0LL;
	for(LL i=1;i<=a/2;i++){
	    Ans+=pow(i,2LL);
	}
	cout<<Ans*8LL<<"\n";
}
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc; scanf("%d", &tc);
	while(tc--) {
        Solve();
	}
    return 0; 
}