#include "bits/stdc++.h"
using namespace std;
#define LL long long

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
	int a,b,c;
	a = nxt();
	b = nxt();
	if(a==1) puts("0");
	else if(a==2) {
	    cout<<b<<"\n";
	}
	else cout<<b*2<<"\n";
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