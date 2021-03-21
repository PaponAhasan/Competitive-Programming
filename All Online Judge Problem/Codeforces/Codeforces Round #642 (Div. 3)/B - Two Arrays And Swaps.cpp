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

void solve() {
    int n,k;
    cin >> n>>k;
    vector<long long> a(n),b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
     }
      for(int i = 0; i < n; i++) {
        cin >> b[i];
     }
     sort(a.begin(), a.end());
     sort(b.begin(), b.end(), greater<int>());
     for(int i=0;i<n;i++){
         if(k==0) break;
         if(a[i]<b[i]){
             a[i]=b[i];
             k--; 
         }
     }
     int sum=0;
     for(auto x:a){
         sum+=x;
     }
     cout<<sum<<"\n";
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc; scanf("%d", &tc);
	while(tc--) {
        solve();
	}
    return 0; 
}