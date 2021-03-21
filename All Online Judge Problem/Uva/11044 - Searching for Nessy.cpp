#include <cstdio>
using namespace std;

int main() {
	int tc, w,h;

	scanf("%d",&tc);
	while(tc--){
		scanf("%d %d",&n,&m);
		printf("%d\n",(n/3)*(m/3));
	}
	return 0;
}
