#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int k;
        //char ch;
        char str[101];
        vector<int>vc;

        cin>>k;

        cin>>str;


        for(int i=0;i<k;i++){
            if(str[i]=='A'){
                vc.push_back(i+1);
            }
        }
        vc.push_back(k+1);

        int mx=0,diff;
        for(int i=0;i<vc.size()-1;i++){
            diff=abs(vc[i]-vc[i+1]);
            diff=diff-1;
            if(mx<(diff))
             mx=max(mx,diff);
        }
        cout<<mx<<"\n";
    }
	return 0;
}
