#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec;

    vec.push_back(34);
    vec.push_back(10);
    vec.push_back(11);

    vec.clear();


    vec[0]=50;
    cout<<"Vector_Size:"<<vec.size()<<endl;

    cout<<vec[2]<<endl;;

    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";

    return 0;
}

