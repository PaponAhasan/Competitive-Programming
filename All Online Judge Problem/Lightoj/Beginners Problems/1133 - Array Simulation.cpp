#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t,C=1;
    cin>>t;

    while(t--){
        int n,m,element,D,K,Y,Z;
        char ch;

        cin>>n>>m;

         vector<int>vec;

        for(int i=0; i <n; i++){
                scanf("%d",&element);
                vec.push_back(element);
        }

        for(int i=0;i<m;i++){
           cin>>ch;

            if(ch=='S'){
                cin>>D;
                for(int i=0;i<vec.size();i++){
                    vec[i]=vec[i]+D;
                }
            }

            else if(ch=='M'){
                cin>>D;
                for(int i=0;i<vec.size();i++){
                    vec[i]=vec[i]*D;
                }
            }

            else if(ch=='D'){
                cin>>K;
                for(int i=0;i<vec.size();i++){
                    vec[i]=vec[i]/K;
                }
            }

           else if(ch=='R'){
               reverse(vec.begin(),vec.end());
            }

            else if(ch=='P'){
                cin>>Y>>Z;
               swap(vec[Y],vec[Z]);
            }
        }
        cout<<"Case "<<C++<<":\n";
        for(int i=0;i<vec.size();i++){
            cout<<vec[i];

            if(i!=vec.size()-1)
                cout<<" ";
            else cout<<"\n";
        }
    }
    return 0;
}

