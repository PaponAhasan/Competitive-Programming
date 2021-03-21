#include "bits/stdc++.h"
using namespace std;
#define LL long long
int ar[100010];
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

void join() {
    int x;
    cin>>x;
    int a[] = {1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2,
              1, 15, 2, 2, 5, 4, 1, 4, 1, 51};
    cout<<a[x-1];
}

int main()
{
    scanf("%d", &tc);
    join();
    return 0; 
}
