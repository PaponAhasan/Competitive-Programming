#include "bits/stdc++.h"
using namespace std;
#define LL long long

void Solve(){
    string str;
    while(getline(cin,str)){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        int count = 0,Ans = 0;
        for(int i=0;i<(int)str.length();i++){
            if(str[i]>='a' and str[i]<='z') count = 1;
            else{
                Ans+=count;
                count = 0;
            }
        }
        cout<<Ans<<"\n";
    }
}

int main()
{
   // int tc; scanf("%d", &tc);
	//while(tc--) {
           Solve();
	//}
    return 0; 
}