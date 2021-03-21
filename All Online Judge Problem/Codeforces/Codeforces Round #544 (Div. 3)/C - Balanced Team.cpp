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

 
void join(int x, int y) {
    string s;
    cin>>s;
}

void solve() {
    LL n;
    n = readint();
    vector<long long> vc(n);
    for(int i = 0; i < n; i++) {
        vc[i] = readint();
     }
    
    sort(&vc[0],&vc[n]);
    LL cnt = 0,mx= 0LL;
    for(LL i=0;i<n-1;i++){
    	cnt = 0LL;
    	if(vc[i]==vc[i-1]) continue;
    	for(LL j=i+1;j<n;j++){
    	  if(abs(vc[i]-vc[j])<=5) cnt++;
    	  else break;
	 }
	mx = max(mx,cnt);
	if(mx+1>=n-i) break;
     }
	cout<<mx+1LL<<"\n";
   //output_vector(vc);
}

void Solve(){
    int a,b,c;
    a = readint();
    b = readint();
    c = readint();
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