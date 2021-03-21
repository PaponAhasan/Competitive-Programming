// C++ program to remove spaces using stringstream
#include<bits/stdc++.h>
using namespace std;

/* Function to remove spaces */
string removeSpaces(string str)
{
	stringstream ss;
	string temp;

	/* Storing the whole string into string stream */
	ss << str;

	/* Making the string empty */
	str = "";

	/* Running loop till end of stream */
	while (!ss.eof()){
		/* extracting word by word from stream */
		ss >> temp;

		/* concatenating in the string to be
		returned*/
		str = str + temp;
	}
	return str;
}

int main()
{
	s = "geeks quiz is awsome!";
	cout << removeSpaces(s) << endl;

	return 0;
}

