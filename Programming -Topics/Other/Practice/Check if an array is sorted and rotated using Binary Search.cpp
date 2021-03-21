#include <bits/stdc++.h> 

using namespace std; 

int findPivot(int arr[], int low, int high) 
{
	if (high < low) 
		return -1; 
	if (high == low) 
		return low; 

	int mid = (low + high) / 2; 
	if (mid < high && arr[mid + 1] < arr[mid]) 
	{ 
		return mid; 
	} 

	if (mid > low && arr[mid] < arr[mid - 1]) 
	{ 
		return mid - 1; 
	} 

	if (arr[low] > arr[mid]) 
	{ 
		return findPivot(arr, low, mid - 1); 
	} 
	else
	{ 
		return findPivot(arr, mid + 1, high); 
	} 
} 
 
bool isRotated(int arr[], int n) 
{ 
	int l = 0; 
	int r = n - 1; 
	int pivot = -1; 
	if (arr[l] > arr[r]) 
	{ 
		pivot = findPivot(arr, l, r); 

		if (l < pivot) 
		{ 
			while (pivot > l) 
			{ 
				if (arr[pivot] < arr[pivot - 1]) 
				{ 
					return false; 
				} 
				pivot--; 
			} 
		} 

		else { 
			pivot++; 
			while (pivot < r) { 
				if (arr[pivot] > arr[pivot + 1]) { 
					return false; 
				} 
				pivot++; 
			} 
		} 

		return true; 
	} 

	else { 
		return false; 
	} 
} 

int main() 
{ 
	int arr[] = { 3, 4, 5, 1, 2 }; 
	if (isRotated(arr, 5)) cout<<"true"; 
	else
	cout<<"false"; 
	return 0; 
} 