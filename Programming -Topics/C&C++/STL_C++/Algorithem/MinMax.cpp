#include<iostream> 
#include<algorithm> 
using namespace std; 

int main() 
{
    pair<int, int> mnmx;
    mnmx = minmax(53, 23); 
    cout << mnmx.first;//23
    cout << mnmx.second ;//53
	
    mnmx = minmax({2, 5, 1, 6, 3});
    cout << mnmx.first;//1
    cout << mnmx.second;//6
} 
