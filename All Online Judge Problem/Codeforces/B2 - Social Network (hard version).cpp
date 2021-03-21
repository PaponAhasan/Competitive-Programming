#include "bits/stdc++.h"
using namespace std;

void fasrerIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int *solve(int A[],int n,int k)
{

    set<int>st;
    set<int> :: iterator its;
    deque<int>dq;
    deque<int> :: iterator it;

    for(int i=0; i<n; i++)
    {
        its=st.find(A[i]);
        if(its!=st.end())
            continue;
        if(dq.size()==k)
        {
            st.erase(st.find(dq.back()));
            st.insert(A[i]);
            dq.pop_back();
            dq.push_front(A[i]);
        }
        else
        {
            st.insert(A[i]);
            dq.push_front(A[i]);
        }
    }

    cout<<dq.size()<<endl;
    for(it=dq.begin(); it!=dq.end(); it++)
    {
        cout<<*it<<" ";
    }
}

int main()
{
    fasrerIO();

    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    solve(arr,n,k);

    return 0;
}
