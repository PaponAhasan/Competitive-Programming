#include "bits/stdc++.h"
using namespace std;

int main()
{
    char str [100005];
    char res1[100005];
    char res2[100005];
    char res3[100005];

    scanf("%s",str);

    int l=strlen(str);
    int j=0,k=0,m=0,cnt=0,len1,len2,half;

    if(str[l-1]=='a'){
           for(int i=l-2;i>=0;i--){
                 if(str[i]!='a'){
                     cout<<":(";
                     return 0;
                }
        }
        cout<<str;
    }

    else{

        for(int i=0;i<l;i++){
           if(str[i]!='a'){
            cnt++;
        }
    }

    if(cnt%2) {
            cout<<":(";
           return 0;
    }

    else {
        for(int i=0,j=l-(cnt/2);i<l-(cnt/2);i++){
            if(str[i]!='a' && str[i]!=str[j]){
                cout<<":(";
                return 0;
            }
            if(str[i]==str[j]){
                j++;
            }
        }
        for(int i=0;i<l-(cnt/2);i++){
               cout<<str[i];
        }
        return 0;

    }
}

    return 0;
}
