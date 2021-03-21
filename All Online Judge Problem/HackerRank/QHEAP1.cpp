#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int q;
    cin>>q;
    multiset<int>pq;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        if(x == 1){
            int y;
            cin>>y;
            pq.insert(y);
        }
        else if(x == 2){
            int y;
            cin>>y;
            pq.erase(y);
        }
        else {
            auto it = pq.begin();
            cout<<*it<<"\n";
        }
    }  
    return 0;
}
