#include <bits/stdc++.h>
using namespace std;

// Function to find all string which are greater than given length k using stringstream
void findWords(string str, int K)
{
	string word;

	// using stringstream to break
	// the string into tokens
	stringstream ss(str);

	int count = 0;
	while (ss >> word) { // reading words
		if (word.size() > K) {
			cout << word << " ";
			count++;
			count++;
		}
	}
}

int main()
{
	string str = "geeks for geeks";

	int k = 4;

	findWords(str, k);

	return 0;
}

