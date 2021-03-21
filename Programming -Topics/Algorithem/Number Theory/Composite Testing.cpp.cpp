// A optimized school method based C++ program to check 
// if a number is composite(যৌগিক). 
#include <bits/stdc++.h> 
using namespace std; 

bool isComposite(int n) 
{ 
	if (n <= 1) return false; 
	if (n <= 3) return false; 

	if (n%2 == 0 || n%3 == 0) return true;

        // 6 num por por and i+2 por por num gula ase
	for (int i=5; i*i<=n; i=i+6) 
		if (n%i == 0 || n%(i+2) == 0) 
		return true; 

	return false; 
} 

int main() 
{ 
	isComposite(11)? cout << " true\n": cout << " false\n"; 
	isComposite(15)? cout << " true\n": cout << " false\n"; 
	return 0; 
}
