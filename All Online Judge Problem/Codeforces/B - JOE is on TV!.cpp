#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    double sm=0;
    for(int i=1;i<=n;i++){
        sm+=1.0/i;
    }

    printf("%.12lf\n",sm);
	return 0;
}
