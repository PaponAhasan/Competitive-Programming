#include "bits/stdc++.h"
using namespace std;
#define LL long long

void Solve(){
   string str;
   while(getline(cin,str)){
       int sum = 0;
       for(int i=0;i<(int)str.length();i++){
           if(isdigit(str[i]))
               sum+=(str[i]-'0');
               
           else if(str[i]>='A' and str[i]<='Z'){
               char ch = str[i];
              for (int i = 1; i <= sum; i++){
                  cout<<ch;
              }
              sum = 0;
           }
                   
           else if(str[i]=='*' or str[i]==' '){
               char ch = str[i];
               for (int i = 1; i <= sum; i++){
                 cout<<ch;
              }
              sum = 0;
           }
           else if(str[i]=='b'){
               for (int i = 1; i <= sum; i++){
                  printf(" ");
              }
              sum = 0;
           }
          else if(str[i]=='!')
               printf("\n");           
       }
      cout<<"\n";
    }
}

int main()
{
    Solve();
    return 0; 
}