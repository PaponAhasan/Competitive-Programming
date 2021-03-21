#include "bits/stdc++.h"
using namespace std;
#define LL long long

int h,b,c,d,e,f,g,Ans;
vector<int>x;	
bool Check_is_sorted(vector<int>a,int n)
{
	bool flag=true;
	if(a[0]<a[n-1]){
	    for(int i=0;i<n-1;i++){
	        if(a[i]>a[i+1]){
				flag=false;break;
			}
		}
	}
	else{
	    for(int i=0;i<n-1;i++){
	        if(a[i]<a[i+1]){
				flag=false;break;
			}
		}
	}
    
	h=b=c=d=e=f=g=0;
	for(int i=0;i<n;i++){
	    if(a[i] == 0 ){
	       h++;
	    }
        if(a[i] == 1 ){
          b++;
        } 
        if(a[i] == 2 ){
           c++; 
        } 
        if(a[i] == 3 ) {
           d++;
        }
        if(a[i] == 4 ){
            e++;
        }
        if(a[i] == 5 ){
           f++; 
        }
        if(a[i] == 6 ){
           g++; 
        }
        if(h>9 or b>9 or c>9 or d>9 or e>9 or f>9 or g>9){ 
            flag = false;break;
        }
	}
	return flag;
}

vector<int>func(string q){
    int sz = (int)q.size();
    vector<int>w(sz,-1);
     Ans = 0;
    int num[] = {1000000,100000,10000,1000,100,10,1};
    for(int i=0;i<sz;i++){
        if(q[i] == 'B' ){
             w[i] = 0; 
             Ans+=num[6];
        }
        if(q[i] == 'U' ){
            w[i] = 1; 
             Ans+=num[5];
        }
        if(q[i] == 'S' ){
             w[i] = 2;
             Ans+=num[4];
        }
        if(q[i] == 'P' ) {
            w[i] = 3;
             Ans+=num[3];
        }
        if(q[i] == 'F' ){
             w[i] = 4;
              Ans+=num[2];
        }
        if(q[i] == 'T' ) {
            w[i] = 5;
             Ans+=num[1];
        }
        if(q[i] == 'M' ) {
            w[i] = 6;
            Ans+=num[0];
        }
    }
    return w;
}

void solve() {
    string q;
    cin>>q;
    int sz = (int)q.size();
    vector<int>w = func(q);
   
    if(!Check_is_sorted(w,sz)){
        puts("error");
        return;
    }
    cout<<Ans<<"\n";
}


int main()
{
    int tc; scanf("%d", &tc);
	while(tc--) {
         solve();
	}
    return 0; 
}
