#include <bits/stdc++.h>
using namespace std;

int n;
string str;
void Case(){
    cin>>n;
    str = "bbaa";
}

void length(){
    for(int i=0,j=0;j<n;i++,j++){
        cout<<str[i];
        if(i==3){
            i=-1;
        }
    }
    cout<<"\n";
}

int main() {
    Case();
    length();
    return 0;
}
