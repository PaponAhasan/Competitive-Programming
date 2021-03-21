#include <iostream>
using namespace std;

int main() {
	int T;
	while(cin>>T){
	    if(T==0)break;
	    int n,m;
	    cin>>n>>m;
	    for(int i=0;i<T;i++){
	        int a,b;
	        cin>>a>>b;
	        if(a>n and b>m) cout<<"NE"<<"\n";
	        else if(a>n and b<m) cout<<"SE"<<"\n";
	        else if(a<n and b>m) cout<<"NO"<<"\n";
	        else if(a<n and b<m) cout<<"SO"<<"\n";
	        else cout<<"divisa"<<"\n";
	    }
	}
	return 0;
}