// C++ program to illustrate the 
// forward_list::emplace_after() function 
#include <forward_list> 
#include <iostream> 

using namespace std; 
//forward_list_name.emplace_after(iterator position, elements)
int main() 
{ 

	list<int> fwlist = { 1, 2, 3, 4, 5 }; 

	auto it_new = fwlist.before_begin(); 

	it_new = fwlist.emplace_after(it_new, 8); 
	it_new = fwlist.emplace_after(it_new, 10); 
        fwlist.emplace_front(9); 
        fwlist.emplace_front(11); 
	for (auto it = fwlist.cbegin(); it != fwlist.cend(); it++) { 
		cout << *it << " "; 
	} 

	return 0; 
} 
