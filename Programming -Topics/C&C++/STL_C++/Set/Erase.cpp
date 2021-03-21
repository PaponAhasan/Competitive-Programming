#include <iostream> 
#include <set> 

using namespace std; 

int main() 
{
	set<int> myset{ 1, 2, 3, 4, 5 }; 
	set<int>::iterator it1, it2; 

	// defining it1 pointing to the first 
	// element and it2 to the last element 
	it1 = myset.begin(); 
	it2 = myset.end(); 

	// decrementing the it2 two times 
	it2--; 
	it2--; 

	// erasing elements within the range 
	// of it1 and it2 
	myset.erase(it1, it2); 

	for (auto it = myset.begin(); 
		it != myset.end(); ++it) 
		cout << ' ' << *it; //4 5
	/*---------------------------------------*/	
	set<char> myset{ 'A', 'C', 'E', 'G' }; 
    set<char>::iterator it1, it2; 
  
    it1 = myset.begin(); 
    it2 = myset.end(); 
  
    it2--; 
    it2--; 
  
    myset.erase(it1, it2); 
  
    for (auto it = myset.begin(); 
        it != myset.end(); ++it) 
        cout << ' ' << *it; //E G
   /*----------------------------------------*/
    set<int> myset{ 1, 2, 3, 4, 5 }; 
    set<int>::iterator it; 
  
    it = myset.begin(); 
  
    myset.erase(it); 

    for (auto it = myset.begin(); 
        it != myset.end(); ++it) 
        cout << ' ' << *it;//2 3 4 5
   /*--------------------------------------*/
    set<char> myset{ 'A', 'B', 'C', 'D' }; 
    set<char>::iterator it; 
 
    it = myset.begin(); 
  
    myset.erase(it); 

    for (auto it = myset.begin(); 
        it != myset.end(); ++it) 
        cout << ' ' << *it; //B C D
  /*------------------------------------*/
   set<int> myset{ 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
  
    for (auto i = myset.begin(); i != myset.end(); ) { 
        if (*i % 2 == 0)  
            i=myset.erase(i); 
        else
            i++;  
    } 
    for (auto it = myset.begin(); it != myset.end(); ++it) 
        cout << ' ' << *it; 
        
	return 0; 
} 
