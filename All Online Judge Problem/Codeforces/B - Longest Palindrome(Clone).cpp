#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a,b;
    cin>>a>>b;
    string s[111];

    for(int i=0;i<a;i++){
        cin>>s[i];
    }

    string left,mid,right;
    for(int i=0;i<a;i++){
        string tm=s[i];
        reverse(tm.begin(),tm.end());
           for(int j=0;j<i;j++){
               if(tm==s[j]){
                   left+=s[j];
                   right+=tm;
               }
           }
           if(s[i]==tm) mid=s[i];
    }
    cout<<left.size()*2+mid.size()<<"\n";
    reverse(right.begin(),right.end());
    cout<<left<<mid<<right;
    return 0;
}
