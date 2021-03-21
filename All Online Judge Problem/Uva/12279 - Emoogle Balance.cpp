#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int C=1;
	while(cin>>n && n!=0){
	int ar[n];
	int c,k;
	c=k=0;
	for(int i=0;i<n;i++){
	    cin>>ar[i];
	    if(ar[i]==0) c++;
	     else k++;
	}

	cout<<"Case "<<C++<<": "<<k-c<<"\n";
  }
	return 0;
}

