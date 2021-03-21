// Program to print all prime factors 
#include<bits/stdc++.h>
using namespace std;
# include <stdio.h> 
# include <math.h> 
void primeFactors(int n) 
{
    set<int>v;
	while (n%2 == 0) {
	    v.insert(2);
		n = n/2; 
	} 

	for (int i = 3; i <= sqrt(n); i = i+2) { 
		while (n%i == 0) { 
			v.insert(i);
			n = n/i; 
		} 
	} 

	if (n > 2) v.insert(n); 
	cout<<v.size()<<"\n";
} 

int main() 
{ 
	int n;
	while(cin>>n and n>0){
	cout<<n<<" : ";
	primeFactors(n); 
	}
	return 0; 
} 
