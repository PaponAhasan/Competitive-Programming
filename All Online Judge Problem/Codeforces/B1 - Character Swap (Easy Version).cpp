#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    string a;
    string b;
    cin>>a;
    cin>>b;
    char ch1,ch2;
    int s1,s2;

    for(int i=0,j=0;i<n;i++,j++){
        if(a[i]!=b[j]){
           s1=i;
           ch1=a[s1];
           //ch2=b[j];
           break;
        }
    }

      for(int i=0,j=0;i<n;i++,j++){
        if(a[i]!=b[j]){
           s2=j;
           //ch1=a[i];
           ch2=b[s2];

        }
    }

    for(int i=0;i<n;i++){
        if(a[i]==ch1){
            a[s1]=ch2;
            break;
        }
    }

    for(int i=0;i<n;i++){
        if(b[i]==ch2){
            b[s2]=ch1;
            break;
        }
    }

    if(a==b){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    }
}
