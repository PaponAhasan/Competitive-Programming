#include "bits/stdc++.h"
using namespace std;

#define Oo 2e9+10
int flag[10000];

void fasrerIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve(int arr[],int n,int m)
{

    set<int>st;
    set<int> :: iterator it;
    st.clear();

    sort(&arr[0],&arr[n]);

    for(int i=0; i<n; i++)
    {
        flag[arr[i]]++;
    }

    for(int i=0; i<n-1; i++)
    {
        if(m%arr[i]!=0)
        {
            st.insert(arr[i]);
        }

        if(flag[arr[i]]==2)
        {
            st.insert(arr[i]);
        }
    }

    it = max_element (st.begin(), st.end());
    cout<< m <<" "<< *it <<"\n";
//    cout<< m <<" ";
//    for(it=st.begin(); it!=st.end(); it++)
//        cout<<*it<<"\n";
}

int main()
{
    fasrerIO();
    int n,mx=0;
    cin>>n;

    int d[n];
    for(int i=0; i<n; i++)
    {
        cin>>d[i];
        if(mx<d[i])
            mx=d[i];
    }
    solve(d,n,mx);

    return 0;
}
