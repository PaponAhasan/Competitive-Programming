#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;

    /*This code Time 30 ms But "Easy"
    better then bellow code*/
    if(min(row,col)%2) cout<<"Akshat"<<"\n";
    else cout<<"Malvika"<<"\n";

    /*This code Time 15 ms
    ------------------------
    if(col<=row && col%2) {
        cout<<"Akshat"<<"\n";
        return 0;
    }
    else if(col<=row && !col%2) {
        cout<<"Malvika"<<"\n";
        return 0;
    }
    else if(col>=row && row%2)
    cout<<"Akshat"<<"\n";
    else cout<<"Malvika"<<"\n";
    */
    return 0;
}
