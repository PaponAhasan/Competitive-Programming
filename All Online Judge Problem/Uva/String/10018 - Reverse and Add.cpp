#include "bits/stdc++.h"
using namespace std;
#define LL long long

int sum;
bool palindrome(string x){
     int count=0;
    sum+=(++count);
    string r = x;
    reverse(r.begin(),r.end());
    if(x==r){
       cout<<sum<<" ";
       return true;
    }
    else return false;
}

void string_addition(string y){
    string a = y;
    reverse(a.begin(),a.end());
    
    string add;
    int result=0,rem;
    for(int i=a.size()-1;i>=0;i--){
        int sum = (y[i]-'0') + (a[i]-'0')+result;
        result = sum/10;
        rem = sum%10;
        add.push_back(rem+'0');
    }
    if(result>0) add.push_back(result+'0');
    reverse(add.begin(),add.end());
    if(palindrome(add)) cout<<add<<"\n";
    else{
        string_addition(add);
    }
}

void join() {
     sum=0;
    string num;
    cin>>num;
    string_addition(num);
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
       join(); 
    }
    return 0; 
}