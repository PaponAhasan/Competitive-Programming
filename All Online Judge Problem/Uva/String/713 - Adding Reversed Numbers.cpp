#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        char s1[100],s2[100],s3[100],s4[100],s5[100],s6[100],s7[100],s8[100];
        cin>>s1>>s2;
        int  c=0;
        int j=0;
        // remove zero prefix string s1
        for(int i=0; i<s1[i] != '\0'; i++){
            if(s1[i]=='0'&& c==0)
                continue;
            else{
                s3[j]=s1[i];
                c=1;
                j++;
            }
        }
        s3[j]='\0';
        // remove zero prefix string s2
        c=0;
        j=0;
        for(int i=0; i<s2[i] != '\0'; i++){
            if(s2[i]=='0'&& c==0)
                continue;
            else{
                s4[j]=s2[i];
                c++;
                j++;
            }
        }
        s4[j]='\0';
        // cout<<s3<<" "<<s4<<"\n";
        // swap string string s3 & s4
        int l1=strlen(s3);
        int l2=strlen(s4);
        for(int i=0,j=l1-1; i<l1/2; i++,j--){
            swap(s3[i],s3[j]);
        }
        for(int i=0,j=l2-1; i<l2/2; i++,j--){
            swap(s4[i],s4[j]);
        }
        //cout<<s3<<" "<<s4<<"\n";
        // remove zero prefix string s5
        c=0,j=0;
        for(int i=0; i<s3[i] != '\0'; i++){
            if(s3[i]=='0'&& c==0)
                continue;
            else{
                s5[j]=s3[i];
                c=1;
                j++;
            }
        }
        s5[j]='\0';
        // remove zero prefix string s6
        c=0;
        j=0;
        for(int i=0; i<s4[i] != '\0'; i++){
            if(s4[i]=='0'&& c==0)
                continue;
            else{
                s6[j]=s4[i];
                c++;
                j++;
            }
        }
        s6[j]='\0';
        //cout<<s5<<" "<<s6<<"\n";
        // two string adding
        if(strlen(s5)>strlen(s6))
            swap(s5,s6);

        string s="";

        int n1=strlen(s5);
        for (int i = 0; i < n1 / 2; i++)
            swap(s5[i], s5[n1 - i - 1]);

        int n2=strlen(s6);
        for (int i = 0; i < n2 / 2; i++)
            swap(s6[i], s6[n2 - i - 1]);

        int carry=0;
        for(int i=0; i<n1; i++){
            int sum=(s5[i]-'0')+(s6[i]-'0')+carry;
            s.push_back((sum%10)+'0');
            carry=sum/10;
        }
        for(int i=n1; i<n2; i++){
            int sum=(s6[i]-'0')+carry;
            s.push_back((sum%10)+'0');
            carry=sum/10;
        }

        if(carry)
            s.push_back(carry+'0');
        reverse(s.begin(),s.end());

        //assign s to str
        char str[100];
        j=0;
        for(int i=0; i<s.size(); i++){
            str[j]=s[i];
            j++;
        }
        str[j]='\0';
         // remove zero prefix string str
        c=0;
        j=0;
        for(int i=0; i<strlen(str); i++){
            if(str[i]=='0'&& c==0)
                continue;
            else{
                s7[j]=str[i];
                c=1;
                j++;
            }
        }
        s7[j]='\0';

        n1=strlen(s7);
        for (int i = 0; i < n1 / 2; i++)
            swap(s7[i], s7[n1 - i - 1]);
        //reverse(s.begin(),s.end());
        // remove zero prefix string s7
        c=0;
        j=0;
        for(int i=0; i<strlen(s7); i++){
            if(s7[i]=='0'&& c==0)
                continue;
            else{
                s8[i]=s7[i];
                c=1;
                j++;

            }
        }
        s8[j]='\0';
       cout<<s8<<"\n";
    }
    return 0;
}

