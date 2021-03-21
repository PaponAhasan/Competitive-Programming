#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;

        int i=s.size()-1;

       // for(int i=s.length()-1; i>=0; i--)
        //{
            if(s[i-1]=='p' && s[i]=='o')
            {
                cout<<"FILIPINO"<<"\n";
            }
            else if(s[i-3]=='d' && s[i-2]=='e' && s[i-1]=='s' && s[i]=='u')
            {
                cout<<"JAPANESE"<<"\n";
            }
            else if(s[i-3]=='m' && s[i-2]=='a' && s[i-1]=='s' && s[i]=='u')
            {
                cout<<"JAPANESE"<<"\n";
            }

            else if(s[i-4]=='m' && s[i-3]=='n' && s[i-2]=='i' && s[i-1]=='d' && s[i]=='a')
            {
                cout<<"KOREAN"<<"\n";
            }
        //}
    }
    return 0;
}

