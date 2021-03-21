#include <bits/stdc++.h>
using namespace std;
#define LL long long int 

vector<LL>v;
void primeFactors(LL n) 
{ 
	while (n%2 == 0LL) { 
		v.push_back(2);
		n = n/2; 
	} 

	for (LL i = 3; i*i <= n ; i = i+2) { 
		while (n%i == 0LL) { 
			v.push_back(i);
			n = n/i; 
		} 
	} 

	if (n > 2) v.push_back(n);
} 

int main() 
{ 
    long long n;
	while(cin>>n and n!=0LL){
        printf("%lld = ",n);
        if(n<0LL){
            printf("-1 x ");
            n*=-1;
        }
        primeFactors(n);
        for (LL i=0LL; i<(int)v.size(); i++){
            if(i==(int)v.size()-1){
                cout << v[i];
                continue;
            }
            cout << v[i] << " x ";
        }
        v.clear();
        cout << endl; 
    }
	return 0; 
} 
