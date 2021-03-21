// C++ program to find sum of two large numbers.
#include<bits/stdc++.h>
using namespace std;

void findSum(string s1, string s2)
{

	if (s1.length() > s2.length())
		swap(s1,s2);

     reverse(s1.begin(),s1.end());
     reverse(s2.begin(),s2.end());

     int carry=0,cry=0;
     for(int i=0;i<s1.length();i++){
         int tm=(s1[i]-'0'+s2[i]-'0')+carry;
         if(tm>9){
             carry=tm/10;
             cry++;
         }
         else carry=0;
     }

      for(int i=s1.length();i<s2.length();i++){
         int tm=(s2[i]-'0')+carry;
         if(tm>9){
             carry=tm/10;
             cry++;
         }
         else carry=0;
     }
     if(cry==0) cout<<"No carry operation."<<"\n";
     else if(cry==1) cout<<cry<<" carry operation."<<"\n";
     else cout<<cry<<" carry operations."<<"\n";


}

// Driver code
int main()
{
	string str1;
	string str2;
	 while(cin>>str1>>str2){
	     if(str1=="0" && str2=="0") break;
	     findSum(str1, str2);
      }

	return 0;
}

