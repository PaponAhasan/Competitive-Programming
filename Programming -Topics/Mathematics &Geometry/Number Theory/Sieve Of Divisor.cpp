#include <bits/stdc++.h>
/*  Akta নাম্বার N থেওয়া আকে , 1 টথশি N এর
সবগুকিা সংখ্যা divisor গুকিা থবর েরকে হকব ।
*/
using namespace std;
#define LL long long
#define MaxN 100000
vector<int>divisor[MaxN+5];

void SeiveOfDivisor(int n){
   for(int i=1;i<=n;i++){
       for(int j=i;j<=n;j+=i){
            divisor[j].push_back(i);
       }
   }
}

int main() {
	int n;
	cin>>n;
        SeiveOfDivisor(n);
	
	for(LL i=1;i<=n;i++){
	    for(int j=0;j<divisor[i].size();j++){
	        cout<<divisor[i][j]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}