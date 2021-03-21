#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

bool myfunc(int a,int b){
    return (a>b);
}

int main()
{
    vector<int>vec;
    vector<int>::iterator it;

    vec.push_back(66);
    vec.push_back(99);
    vec.push_back(77);
    vec.push_back(55);
    vec.push_back(44);
    vec.push_back(88);


   /// down any ascending or descending line comment here..then the sort ascending or descending order..

    ///sort(vec.begin(),vec.end());  ///ascending order
    ///sort(vec.begin(),vec.end(),myfunc); ///descending order
    ///sort(vec.begin(),vec.begin()+3); /// 1st three number sorted

    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<" ";
    }

    return 0;
}
