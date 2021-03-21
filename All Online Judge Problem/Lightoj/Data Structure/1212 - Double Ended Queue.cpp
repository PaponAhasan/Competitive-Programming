#include "bits/stdc++.h"
using namespace std;
#define LL long long
 
int Case=0;
int main()
{
    int tc;
    cin>>tc;
    getchar();
    while(tc--){
        deque<int>Double;
        cout<<"Case "<<++Case<<":"<<"\n";
        int n,m,In;
        cin>>n>>m;
        getchar();
        while(m--){
            string s;
            cin>>s;
            if(s=="pushLeft" or s=="pushRight") {
                cin>>In;
                if(Double.size()==n)cout<<"The queue is full"<<"\n";
                else if(s=="pushLeft"){
                    cout<<"Pushed in left: "<<In<<"\n";
                    Double.push_front(In);
                }
                else {
                   cout<<"Pushed in right: "<<In<<"\n";
                   Double.push_back(In);
                }
            }
         
            else{
               if(Double.size()==0) cout<<"The queue is empty"<<"\n";
               else if(s=="popLeft"){
                    cout<<"Popped from left: "<<Double.front()<<"\n";
                    Double.pop_front();
               }
               else{
                   cout<<"Popped from right: "<<Double.back()<<"\n";
                   Double.pop_back();
               }
            }
        }
    }
    return 0;
}
