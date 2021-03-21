#include <iostream>
using namespace std;

int main() {
	int tc, x,y;
	cin >> tc;
	while(tc--){
		cin >> x >> y;
		if(x<y) cout << "<";
		else if(x>y) cout << ">";
		else cout << "=";
		cout << endl;
	}

	return 0;
}
