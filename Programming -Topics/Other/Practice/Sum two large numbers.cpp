#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    if(s1>s2) swap(s1,s2);

    string s="";
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());

    int carry=0;
    for(int i=0;i<s1.size();i++){
       int sum=(s1[i]-'0')+(s2[i]-'0')+carry;
        s.push_back((sum%10)+'0');
        carry=sum/10;
    }
    for(int i=s1.size();i<s2.size();i++){
         int sum=(s2[i]-'0')+carry;
         s.push_back((sum%10)+'0');
         carry=sum/10;
    }

    if(carry) s.push_back(carry+'0');
    reverse(s.begin(),s.end());
    cout<<s;

    return 0;
}


