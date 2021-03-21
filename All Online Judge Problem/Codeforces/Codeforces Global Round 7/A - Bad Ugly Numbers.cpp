#include "bits/stdc++.h"
using namespace std;
#define LL long long

void join() {
    int n;
    cin>>n;
    if(n==1){
        cout<<"-1"<<"\n";
        return;
    }
    cout<<"2";
    for(int i=1;i<n;i++){
        cout<<"3";
    }
    cout<<"\n";
}

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--) {
	    join();
	}
    return 0; 
}