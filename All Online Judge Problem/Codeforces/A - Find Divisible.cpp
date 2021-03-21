#include <iostream>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--> 0){
        int a,b;
        cin>>a>>b;
        for(int i=a,j=2;i<=b;j++){

            if(a*j<=b){
             cout<<a<<" "<<a*j<<"\n";
             break;
            }
            else {
                i++;
                j=2;
            }
        }
    }
}

/*
#include <iostream>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--> 0){
        int a,b;
        cin>>a>>b;
        cout<<a<<" "<<a*2<<"\n";
    }
}
*/
