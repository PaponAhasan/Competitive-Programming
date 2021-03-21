#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector<int>vec;
    vector<int>::iterator it;

    for(int i=1;i<=5;i++){
        vec.push_back(i);
    }

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<"\t";
    }
    cout<<endl;

    it=vec.begin();
    cout<< *it<<"\t";

    it++;
    cout<< *it<<"\t";

    it+=3;
    cout<< *it<<"\t";
}

