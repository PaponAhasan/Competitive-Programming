# include <bits/stdc++.h> 
using namespace std;

void primeFactors(int n) 
{ 
     vector<int>v;
     set<int>st;
     set<int>s;
   
	while (n%2 == 0) { 
		v.push_back(2);
		n = n/2; 
	} 

	for (int i = 3; i <= sqrt(n); i = i+2) { 
		while (n%i == 0) { 
			v.push_back(i);
			n = n/i; 
		} 
	} 

	if (n > 2)
	   v.push_back(n);

	   sort(v.begin(),v.end());
	   for(auto x:v) s.insert(x);
	   
	   
	   if(s.size()==3 and v.size()==3){
	       cout<<"YES"<<"\n";
	       for(auto x:v)cout<<x<<" ";
	       cout<<"\n";
	       return;
	   }
	   
	   else if(s.size()<3 and v.size()<4){
	       cout<<"NO"<<"\n";
	       return;
	   }
	    
	   else{
	       st.insert(v[0]);
	       if(v[0]!=v[1]){
	           st.insert(v[1]);
	           int s=1;
	           for(int i=2;i<v.size();i++) s=s*v[i];
	           st.insert(s);
	       }
	       else {
	           st.insert(v[1]*v[2]);
	           int s=1;
	           for(int i=3;i<v.size();i++) s=s*v[i];
	           st.insert(s);
	       }
	       if(st.size()<3){
	           cout<<"NO"<<"\n";
	          return;
	       }
	       cout<<"YES"<<"\n";
	       for(auto x:st)cout<<x<<" ";
	       cout<<"\n";
	   }	   
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
