#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[100];
    string str;
    getline(cin,str);

    stringstream strm(str);

    int count = 0;
    while (strm >> ar[count])
        count++;

    for(int i=0; i<count; i++)
        cout<<ar[i]<<" ";
        cout<<"\n";

    return 0;
}
