#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc,C;
    cin>>tc;
    C=1;
    while(tc--){
        int ar[3];

        for(int i=0;i<3;i++)
            cin>>ar[i];
        sort(ar, ar + 3);
        cout<<"Case "<<C++<<": "<<ar[1]<<"\n";
    }
    return 0;
}
