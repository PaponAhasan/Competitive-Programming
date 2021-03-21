#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	
	vector<int> v1 = {20, 30, 40, 25, 15}; 
	
	make_heap(v1.begin(), v1.end()); //40 30 20 25 15
	cout << v1.front() << endl;//40
	sort_heap(v1.begin(), v1.end());//15 20 25 30 40
	v1.push_back(50); 
	push_heap(v1.begin(), v1.end()); 
	pop_heap(v1.begin(), v1.end()); 
       v1.pop_back();
       for (int &x : v1) cout << x << " ";
       is_heap(v1.begin(), v1.end())? 
       cout << "The container is heap ": 
       cout << "The container is not heap";
       auto it = is_heap_until(v1.begin(), v1.end());
       for (it1=v1.begin(); it1!=it; it1++) 
       cout << *it1 << " ";//40 30 25
	
	return 0; 
} 
