#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
    if(n==0 or n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}

int main() {
	int n;
	cin>>n;
	if(IsPrime(n)) cout<<"Prime"<<"\n";
	else cout<<"Not Prime"<<"\n";
	return 0;
}