#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(n<m){
        cout<<min(a*n,b);
        return 0;
    }
    int r=n%m;
    int A=n/m;
    cout<<min(min(n*a,A*b+r*a),A*b+b);
    return 0;
}

