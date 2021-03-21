#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;

    queue<int>vc,qe;
    set<int>s;

    for(int i=0;i<n;i++){
        cin>>a;
        vc.push(a);
    }

   for(int i=0;i<n;i++){
        cin>>b;
        qe.push(b);
    }

    while(!vc.empty()){
        int ff=vc.front();
        int sf=qe.front();

        if(s.find(ff)!=s.end()){
            vc.pop();
            continue;
        }

         if(ff==sf){
            vc.pop();
            qe.pop();
        }

        else {
            s.insert(sf);
            qe.pop();
        }
    }

    cout<<s.size()<<"\n";

    return 0;
}
