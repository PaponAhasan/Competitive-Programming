#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s[4],cnt=4;
    for(int i=0; i<4; i++)
    {
        cin>>s[i];
    }

    sort(s,s+4);
    if(s[0]==s[1] && s[0]==s[2] && s[0]==s[3])
        cout<<"3"<<endl;
    else if((s[0]==s[1] && s[0]==s[2] && s[0]!=s[3]) || (s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]==s[2] && s[1]==s[3]))
            cout<<"2"<<endl;

  else
    {
        for(int i=0; i<4; i++)
            {
                for(int j=i+1; j<4; j++)
                {
                    if(s[i]==s[j])
                    {
                        cnt--;
                    }
                }
            }

            cout<<4-cnt<<endl;
        }
    return 0;
}
