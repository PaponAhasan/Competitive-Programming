#include <bits/stdc++.h>
using namespace std;
const int N=2e6;
typedef long long ll;

ll a;
int ar[N];
int in[N],out[N];
vector<int>v,vc;

void New_Year(){
    for(int i=1;i<=a;i++){
        if(ar[i]) out[i]++;
        in[ar[i]]++;
    }
    for(int i=1;i<=a;i++){
        if(out[i]==0 ) v.push_back(i);
        if(in[i]==0) vc.push_back(i);
    }

    sort(v.begin(),v.end());
    sort(vc.begin(),vc.end());

    for(int i=0;i<v.size()-1;i++){
        if(v[i]==vc[i] || v[i+1]==vc[i+1]){
            swap(vc[i],vc[i+1]);
        }
    }

    for(int i=0 ;i<vc.size();i++){
         ar[v[i]]=vc[i];
    }

    for(int i=1;i<=a;i++){
        cout<<ar[i];
        cout<<((i==a)?"\n":" ");
    }

}

int main() {

         scanf("%lld",&a);

         for(int i=1;i<=a;i++){
             cin>>ar[i];
         }
         New_Year();
           //for(int i=1;i<=a;i++){
            // cout<<out[i]<<" ";
         //}
         //cout<<endl;
           //for(int i=1;i<=a;i++){
             //cout<<in[i]<<" ";
         //}
    return 0;
}
