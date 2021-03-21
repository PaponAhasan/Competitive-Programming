#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int tc;
	int n;

	scanf("%d", &tc);
	while (tc--) {
		scanf("%d", &n);
		int ans = abs((((n * 63 + 7492) * 5 - 498)/10)%10);
		printf("%d\n", ans);
	}

	return 0;
}
