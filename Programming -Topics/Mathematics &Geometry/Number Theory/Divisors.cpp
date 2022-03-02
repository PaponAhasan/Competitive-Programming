#include <bits/stdc++.h>
using namespace std;

int DivList[100];
void Divisors(int n){
    int sz=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            DivList[sz++]=i;
            if(i*i!=n) DivList[sz++]=n/i;
        }
    }
    
    sort(DivList,DivList+sz);
    for(int i=0;i<sz;i++){
        cout<<DivList[i]<<" ";
    }
}

int main() {
	int n;
	cin>>n;
	Divisors(n);
	return 0;
}