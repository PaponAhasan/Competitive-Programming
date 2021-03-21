#include<bits/stdc++.h>
using namespace std;
#define Pi acos(-1)

int main() 
{
    int n;
    cin>>n;
    while(n--){
        int L;
        cin>>L;
        double W = (6*(double)L)/10.0;
        double R = (2*(double)L)/10.0;
        printf("%.2lf ",Pi*(R*R));
        printf("%.2lf\n",((double)L*W)-(Pi*(R*R)));
    }
	return 0; 
} 
