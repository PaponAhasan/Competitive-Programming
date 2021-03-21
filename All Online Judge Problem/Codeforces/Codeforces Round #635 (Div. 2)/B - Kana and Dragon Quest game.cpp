#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a<=c*10){
	        puts("Yes");
	        continue;
	    }
	    while(b){
	        a/=2;
	        a+=10;
	        b--;
	    }
	    if(a<=c*10)puts("YES");
	    else puts("NO");
	}
	return 0;
}