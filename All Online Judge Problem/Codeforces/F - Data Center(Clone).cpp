#include<bits/stdc++.h>
using namespace std;

int n;
void solve()
{
    set<int>s;
    set<int>st;

    for(int i=1; i<=n; i++){
        if(n%i==0){

            if(i > n/i){
                break;
            }

            s.insert(i);
            st.insert(n/i);
        }
    }
    //for (auto i : s)
    //cout << i << " ";
    cout<<2*(*max_element(s.begin(),s.end())) + 2*(*min_element(st.begin(),st.end()));
}

int main()
{
    cin>>n;
    solve();
    return 0;
}
