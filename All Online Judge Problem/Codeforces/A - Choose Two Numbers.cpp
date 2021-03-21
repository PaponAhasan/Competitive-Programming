#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main()
{
	int a,b;
	cin>>a;

	int mx=0;
	for(int i=0;i<a;i++){
	    int x;
	    cin>>x;
	    mx=max(mx,x);
	}
	cout<<mx<<" ";

	cin>>b;
	mx=0;
	for(int i=0;i<b;i++){
	    int y;
	    cin>>y;
	    mx=max(mx,y);
	}
	cout<<mx<<"\n";
	return 0;
}
