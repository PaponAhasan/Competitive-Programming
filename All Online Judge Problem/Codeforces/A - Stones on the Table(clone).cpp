#include <bits/stdc++.h>
using namespace std;

const int N=51;
int n,ok;
char str[N];

void Case(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
}

void length(){
    ok=0;
    for(int i=0;i<n;i++){
        if(str[i]==str[i+1]){
            ok++;
        }
    }
    cout<<ok<<"\n";
}

int main() {
    Case();
    length();
    return 0;
}
