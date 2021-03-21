#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=2e6;
int tc;
int n;
bool f;
int arr[N];


void SubArray()
{
     int no=1;
	for (int i=0; i <n-1; i++)
	{
	    if(abs(arr[i]-arr[i+1])>=2){
	        cout<<"YES"<<"\n";
	        cout<<i+1<<" "<<i+2<<"\n";
	        no=0;
	        break;
	    }
	}
	if(no) cout<<"NO"<<"\n";
}


int main() {

    scanf("%d",&tc);

    while(tc-- > 0){

         scanf("%d",&n);

         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         SubArray();
    }

    return 0;
}
