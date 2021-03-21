#include "bits/stdc++.h"
using namespace std;
#define LL long long

void join() {
    int n,a,b;
    cin>>n>>a>>b;
    char ch='a';
    string s;
        for(int i=1;i<=n/b;i++){
        for(int j=1;j<=b;j++){
             s.push_back(ch);
             ch++;
        }
        ch='a';
    }
    int l=s.size();
    ch='a';
    for(int i=0;i<n-l;i++){
       s.push_back(ch);
       ch++;
    }
    cout<<s<<"\n";
}

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--) {
        join();
	}
    return 0; 
}