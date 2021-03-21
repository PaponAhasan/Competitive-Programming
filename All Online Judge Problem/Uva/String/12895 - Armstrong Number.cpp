/*
--> Don't try hack it!!

_/﹋\_
(҂`_´)
<,︻╦╤─҉- - - - - - - - - - - - - - -
_/﹋\_

*/

#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    string num;
    cin>>num;
    LL Ans = 0LL;
    LL Sz = (LL)num.length();
    for(int i=0;i<Sz;i++){
        Ans+=pow(num[i]-'0',Sz);
    }
    string str = to_string(Ans);
    puts((str == num)?"Armstrong":"Not Armstrong");
}

int main()
{
    int tc; scanf("%d", &tc);
	while(tc--) {
        solve();
	}
    return 0;
}