#include "bits/stdc++.h"
using namespace std;
#define LL long long

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
 
void solve() {
    int n;
    n = readint();
    vector<long long> chimps(n);
    for(int i = 0; i < n; i++) {
        chimps[i] = readint();
     }
     
    int q;
    q = readint();
    vector<long long> Luchu(q);
    for(int i = 0; i < q; i++) {
        Luchu[i] = readint();
        int lower = lower_bound(chimps.begin(),chimps.end(),Luchu[i]) - chimps.begin();
     	int upper = upper_bound(chimps.begin(),chimps.end(),Luchu[i]) - chimps.begin();
     	(Luchu[i]<=chimps[0]?cout<<"X ":cout<<chimps[lower-1]<<" ");
     	(chimps[upper]==0?cout<<"X"<<"\n":cout<<chimps[upper]<<"\n");
     }
}


int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //int tc; scanf("%d", &tc);
	//while(tc--) {
           solve();
	//}
    return 0; 
}