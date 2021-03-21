#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int temp[10];
    for(int i=0; i<10; i++) temp[i]=0;
    // memset(temp,0,sizeof(temp));

    for(int i=0; i<s.size(); i++){
        if(s[i]=='L'){
            for(int j=0; j<10; j++){
                if(temp[j]==0){
                    temp[j]=1;
                    break;
                }
            }
        }
        else if(s[i]=='R'){
            for(int j=9; j>=0; j--){
                if(temp[j]==0){
                    temp[j]=1;
                    break;
                }
            }
        }
        else{
            temp[s[i]-'0']=0;
        }
    }
    for(int i=0; i<10; i++){
        cout<<temp[i];
    }
    return 0;
}
