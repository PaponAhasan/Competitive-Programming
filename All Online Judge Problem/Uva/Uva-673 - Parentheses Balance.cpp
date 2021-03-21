/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include <bits/stdc++.h>
using namespace std;

int tc;
string str;

void Balance(){
    
    cin>>tc;
    getchar();
    while(tc--){
        stack<char>st;
        getline(cin,str);
   
    for(int i=0;i<str.length();i++){
    
        if(!st.empty() && str[i]==')' && st.top()=='('){
           st.pop();
        }
         else if(!st.empty() && str[i]==']' && st.top()=='['){
             st.pop();
        }
    
        else st.push(str[i]);
    }
    
    if(st.empty()){
        cout<< "Yes"<<"\n";
    }
    else cout<<"No"<<"\n";
    }
}
 
int main() {
    Balance();
    return 0;
}