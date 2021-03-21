 #include<bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	vector< pair <int,int> > vect; 

	int arr[] = {10, 20, 5, 40 }; 
	int arr1[] = {30, 60, 20, 50}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
 
	for (int i=0; i<n; i++) 
		vect.push_back( make_pair(arr[i],arr1[i]) ); 

	// Printing the original vector(before sort()) 
	cout << "The vector before sort operation is:\n" ; 
	for (int i=0; i<n; i++) { 
		cout << vect[i].first <<" "<< vect[i].second << endl;
	} 

	sort(vect.begin(), vect.end()); 

	// Printing the sorted vector(after using sort()) 
	cout << "The vector after sort operation is:\n" ; 
	for (int i=0; i<n; i++){ 
		cout << vect[i].first <<" "<< vect[i].second << endl; 
	} 

	return 0; 
} 
