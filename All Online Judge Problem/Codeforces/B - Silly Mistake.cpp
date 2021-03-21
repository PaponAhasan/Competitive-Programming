#include "bits/stdc++.h"
using namespace std;

void solve(int a[], int n)
{
    int d=0;
    int k=0;
    int ma=0;
    int f=0;
    vector<int> v;
    set<int>s;
    for (int i = 0; i < n; ++i)
    {
        if(a[i]>0 && s.find(-a[i])!=s.end())
        {
            f=1;
            break;
        }
        else if(a[i]<0 && s.find(-a[i])==s.end())
        {
            f=1;
            break;
        }
        else if(a[i]>0 && s.find(a[i])!=s.end())
        {
            f=1;
            break;
        }
        else if(a[i]<0 && s.find(a[i])!=s.end())
        {
            f=1;
            break;
        }
        else if(a[i]>0)
        {
            s.insert(a[i]);
            k++;
        }
        else if(a[i]<0)
        {
            s.erase(s.find(-a[i]));
            s.insert(a[i]);
            k--;
        }
        if(k==0)
        {
            v.push_back(2*s.size());
            s.clear();
            d++;
        }
        // cout<<k<<endl;
    }
    int sum=0;
    for (int i = 0; i < d; ++i)
    {
        sum+=v[i];
    }
    if(f||n%2||sum!=n)
    {
        cout<<-1;
    }
    else
    {
        cout<<d<<endl;
        for (int i = 0; i < d; ++i)
        {
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    solve(arr,n);

    return 0;
}
