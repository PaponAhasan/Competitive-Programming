#include "bits/stdc++.h"
using namespace std;
#define LL long long

/*  Palindrome check */
bool check(string p,LL n)
{
    for(LL i=0,j=n-1;i<n/2;i++,j--){
        if(p[i]!=p[j]){
            return false;
        }
    }
    return true;
    
}

void join() {
    string s;
    cin>>s;
    LL n=s.size();
    /* Full string Palindrome check */
    if(check(s,n)){
        cout<<s<<'\n';
        return;
    }
    /*Full string Not Palindrome.*/
    
    /*check SubString  Palindrome Part*/
    string t=s;
    list<char>a,b;
    LL i=0,j=n-1;
    for( i=0,j=n-1; ;i++,j--){
        if(t[i]==t[j]){
            a.push_back(t[i]);
            b.push_front(t[j]);
        }
        else break;
    }
    string str="";
    for(auto x:a)str.push_back(x);
    LL l;
    for(l=s.size()-(s.size()-1-j)-i;l>0;l--){
        string s=t.substr(i,l);
        if(check(s,s.size())){
           str=str+s;
           break;
        }
    }
    for(auto x:b)str.push_back(x);
    /*check SubString Reverse Palindrome Part*/
    t=s;
    reverse(t.begin(),t.end());

    list<char>m,o;
    for( i=0,j=n-1; ;i++,j--){
        if(t[i]==t[j]){
            m.push_back(t[i]);
            o.push_front(t[j]);
        }
        else break;
    }
    string rts="";
    for(auto x:m)rts.push_back(x);
    for(l=s.size()-(s.size()-1-j)-i;l>0;l--){
        string s=t.substr(i,l);
        if(check(s,s.size())){
           rts=rts+s;
           break;
        }
    }
    for(auto x:o)rts.push_back(x);
    
    /* Two SubString Compare */
    if(str.size()> rts.size()) cout<<str<<"\n";
    else  cout<<rts<<"\n";
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