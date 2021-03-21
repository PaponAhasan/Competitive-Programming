#include <bits/stdc++.h> 

int main() 
{ 
	vector<int> v{ 10, 20, 30, 40, 50 }; 

	cout << "Vector contains :"; 
	for (unsigned int i = 0; i < v.size(); i++) cout<< v[i]; 

	vector<int>::iterator low1, low2; 

	low1 = lower_bound(v.begin(), v.end(), 35); 
	low2 = lower_bound(v.begin(), v.end(), 55); 

	cout << (low1 - v.begin()); //3
	cout << (low2 - v.begin()); //5
	
	lower = lower_bound (v.begin(), v.end(), 6);  
        upper = upper_bound (v.begin(), v.end(), 6);
    
        cout <<(lower- v.begin()) <<'\n'; //3
        cout << (upper - v.begin()) <<'\n'; //6

	return 0; 
} 
