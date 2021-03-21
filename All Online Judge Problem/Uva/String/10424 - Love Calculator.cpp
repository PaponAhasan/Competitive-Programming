#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);

        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

        int sm1=0;
        for(int i=0; i<s1.size(); i++){
            if(s1[i]>='a' && s1[i]<='z')
               sm1+=(s1[i]-'0')-48;
               //sm1+=(s1[i]-'a')+1;
        }

        int sm2=0;
        for(int i=0; i<s2.size(); i++){
            if(s2[i]>='a' && s2[i]<='z')
              sm2+=(s2[i]-'0')-48;
              //sm2+=(s2[i]-'a')+1;
        }

        int s1;
        while(sm1>9)
        {
            s1=0;
            while(sm1!=0){
                int r=sm1%10;
                s1+=r;
                sm1/=10;
            }
            sm1=s1;
        }

        int s2;
        while(sm2>9)
        {
            s2=0;
            while(sm2!=0){
                int r=sm2%10;
                s2+=r;
                sm2/=10;
            }
            sm2=s2;
        }

           if(s1<s2) swap(s1,s2);
        //cout<<setprecision(3)<<(min(s1,s2)*100)/(double)max(s1,s2)<<" "<<"%"<<"\n";
           double result = (s2*100.0)/s1;
        printf("%.2lf %%\n",result);

    }
    return 0;
}

