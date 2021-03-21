#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<int>vc;
    int n,d;
    cin>>n>>d;
    char arr[d][n];

    vc.push_back(0);

    for(int i=0; i<d; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

//4 5
//1101
//1111
//0110
//1011
//1111

    int ok=0,c;
    for(int i=0; i<d; i++)
    {
        c=0;
        for(int j=0; j<n; j++)
        {
            if(arr[i][j]=='0')
            {
                ok++;
                break;
            }
            if(arr[i][j]=='1')
                  c++;
        }
        if(c==n || i==d-1){
            vc.push_back(ok);
            ok=0;
        }
    }

//    for(int i=0; i<vc.size(); i++)
//    {
//        cout<<vc[i];
//    }
    cout<<*max_element(vc.begin(),vc.end())<<"\n";
    return 0;
}
