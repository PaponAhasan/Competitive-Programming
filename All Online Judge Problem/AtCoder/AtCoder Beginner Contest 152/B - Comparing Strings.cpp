#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    string s;
    cin>>a>>b;
    if(a>b){
        for(int i=0;i<a;i++){
            cout<<b;
        }
        cout<<"\n";
    }
    else if(a==b){
        for(int i=0;i<a;i++){
            cout<<b;
        }
        cout<<"\n";
    }
    else {
        for(int i=0;i<b;i++){
            cout<<a;
        }
        cout<<"\n";
    }
	return 0;
}
