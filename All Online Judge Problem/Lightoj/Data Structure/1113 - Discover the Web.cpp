#include "bits/stdc++.h"
using namespace std;
#define LL long long
 
int Case=0;
int main()
{
    int tc;
    cin>>tc;
    getchar();
    while(tc--){
        stack<string>Back,Forward;
        Back.push("http://www.lightoj.com/");
        string s;
        cout<<"Case "<<++Case<<":"<<"\n";
        while(cin>>s){
            if(s=="QUIT"){
                break;
            }
            else if(s=="BACK" and Back.size()>1){
                Forward.push(Back.top());
                Back.pop();
                cout<<Back.top()<<"\n";
            }
            else if(s=="VISIT"){
                string a;
                cin>>a;
                cout<<a<<"\n";
                Back.push(a);
                while(!Forward.empty()) Forward.pop();
            }
           else if(s=="FORWARD" and !Forward.empty()){
               Back.push(Forward.top());
               cout<<Forward.top()<<"\n";
               Forward.pop();
           }
           else  cout<<"Ignored"<<"\n";
        }
    }
    return 0;
}
