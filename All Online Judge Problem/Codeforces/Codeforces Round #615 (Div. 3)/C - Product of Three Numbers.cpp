# include <bits/stdc++.h> 
using namespace std;

void primeFactors(int n) 
{ 
    int a[3]={0};
    int j=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a[j]=i;
            if(j==1){
                a[++j]=n/i;
                break;
            }
            n/=i;
            j++;
        }
    }
    
    if(a[2]==0 or a[0]==a[1] or a[1]==a[2] or a[2]==a[0]){
        cout<<"NO"<<"\n";
        return;
    }
    
    cout<<"YES"<<"\n";
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<"\n";
} 

int main() 
{ 
    int tc;
    cin>>tc;
    while(tc--){
	  int n;
	  cin>>n;
	  primeFactors(n);
    }
	return 0; 
} 
