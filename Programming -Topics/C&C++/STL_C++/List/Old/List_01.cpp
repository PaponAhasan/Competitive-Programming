#include<iostream>
#include<stdio.h>
#include<string>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    list<int>mylist;
    list<int>::iterator it;

    mylist.push_back(10);
    mylist.push_back(30);
    mylist.push_back(20);

    mylist.push_front(-10);
    mylist.push_front(-20);
    mylist.push_back(40);

    cout<<mylist.empty()<<endl;

    ///mylist.clear();

    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    mylist.reverse();

    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<" ";
    }

    cout<<endl;
    cout<<mylist.size()<<endl;
}
