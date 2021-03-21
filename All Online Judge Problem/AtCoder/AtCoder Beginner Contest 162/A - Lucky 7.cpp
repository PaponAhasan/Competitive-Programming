#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int n;
    cin>>n;
    while(n!=0){
        int r=n%10;
        n/=10;
        if(r==7){
            cout<<"Yes"<<"\n";
            return 0;
        }
    }
        cout<<"No"<<"\n";
	return 0; 
} 
