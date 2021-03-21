#include "bits/stdc++.h"
using namespace std;
/*An odd number of segments, each having an odd length. Thus the whole array needs to have an odd length.
All segments starts and ends with odd numbers, so the array begins and ends with odd numbers as well.
Thus the answer is Yes if and only if n is odd, a1 is odd, and an is odd.*/
int main()
{
        int n;
        cin>>n;
        vector<int>vc(n);
        for(auto &x:vc){
            cin>>x;
        }
        if(vc[0]&1 and vc[n-1]&1 and n&1) {
            cout<<"Yes";
            return 0;
        }
        cout<<"No";
    return 0;
}