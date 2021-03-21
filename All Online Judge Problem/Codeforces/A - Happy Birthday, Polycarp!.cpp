#include<bits/stdc++.h>
using namespace std;

/// (1) digits in total (9) a satisfactory number:  (1,2,3,4,5,6,7,8,9) ;
/// (2) digits in total (9) a satisfactory number:  (11,22,33,44,55,66,77,88,99) ;
/// (3) digits in total (9) a satisfactory number:  (111,222,333,444,555,666,777,888,999) ;

void fasrerIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int n;
int tc;
int solve()
{
    int ok=0;
    for(int i=1; i<=9; i++)
    {
        int digit=0;
        for(int j=0; j<9; j++)
        {
            digit=(digit*10)+i;
            if(digit > n)
                break;
            ok++;
        }
    }
    return ok;
}

int main()
{
    fasrerIO();
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        cout<<solve()<<"\n";
    }
    return 0;
}
