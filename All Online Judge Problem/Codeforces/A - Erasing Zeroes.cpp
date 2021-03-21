#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        string str;
        cin>>str;

        int f,s;
        for(int i=0;i<str.size();i++){
            if(str[i]=='1'){
                s=i;
                break;
            }
        }

          for(int i=str.size()-1;i>=0;i--){
            if(str[i]=='1'){
                f=i;
                break;
            }
        }

        int zero=0;
           for(int i=s+1;i<=f-1;i++){
            if(str[i]=='0'){
                zero++;
            }
        }

        cout<<zero<<"\n";
    }
	return 0;
}
