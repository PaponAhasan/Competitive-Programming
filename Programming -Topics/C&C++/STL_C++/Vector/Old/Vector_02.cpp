#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec(5,-2);

    vec.push_back(10);
    vec[3]=30;

    for(int i=1;i<=5;i++){
        vec.push_back(i);
    }

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}
