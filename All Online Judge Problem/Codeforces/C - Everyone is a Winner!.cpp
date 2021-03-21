#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        long long n;
        cin>>n;

        set<long long>v;
        for(int i=1;i*i<=n;i++){
            if(n-(n/i)>=0){
                v.insert(n/i);
                v.insert(i);
            }
        }

        v.insert(0);
        cout<<v.size()<<"\n";
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<"\n";
        v.clear();
    }
	return 0;
}
