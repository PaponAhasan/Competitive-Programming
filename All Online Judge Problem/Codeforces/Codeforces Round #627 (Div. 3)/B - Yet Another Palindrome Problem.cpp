// C++ Program to check whether the 
// Array is palindrome or not 
 
#include "bits/stdc++.h"
using namespace std;
#define LL long long
 
void palindrome() 
{ 
    int tc;
    cin>>tc;
    while(tc--){
    
     int n;
     cin >> n;
     int arr[n];
     for(int i=0;i<n;i++)
          cin>>arr[i];
    
	int flag = 0; 
	for (int i = 0; i <= n / 2 && n != 0; i++) { 
		if (arr[i] != arr[n - i - 1]) {
                        flag = 1; 
			break; 
		} 
	}
 
	if (flag == 0 or n==1){
	    cout<<"YES"<<"\n";
	     continue;
	}
	
	bool ck=false;
	for(int i=0;i<n;i++){
	    for(int j=n-1;j>=i+1;j--){
	       if(arr[i]==arr[j] and abs(j-i)>=2){
	           cout<<"YES"<<"\n";
	           ck=true;
	          break;
	       } 
	    }
	    if(ck)break;
	}
	if(ck==false)
	  cout<<"NO"<<"\n";
    }
} 
 
int main() 
{
        palindrome(); 
	return 0; 
} 