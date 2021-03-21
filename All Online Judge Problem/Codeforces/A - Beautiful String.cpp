#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int c=0;
        //char str[100000];
        string str;
        cin>>str;
        int l=str.length();

        for(int i=0; i<l; i++)
        {
            if(str[i]=='?')
            {
                if(l==1){
                    str[i]='a';
                }

                else if(i==0)
                {
                    if(str[i+1]=='a' || str[i+1]=='?')
                        str[i]='b';
                    else if(str[i+1]=='b' || str[i+1]=='?')
                        str[i]='a';
                    else if(str[i+1]=='c' || str[i+1]=='?')
                        str[i]='a';
                }

                else if(i>0 && i<l-1)
                {
                    if((str[i+1]=='a' || str[i+1]=='?') && str[i-1]=='b')
                        str[i]='c';
                    else if((str[i+1]=='b'|| str[i+1]=='?') && str[i-1]=='a')
                        str[i]='c';
                    else if((str[i+1]=='a' || str[i+1]=='?') && str[i-1]=='c')
                        str[i]='b';
                    else if((str[i+1]=='c'|| str[i+1]=='?') && str[i-1]=='a')
                        str[i]='b';
                    else if((str[i+1]=='c'|| str[i+1]=='?') && str[i-1]=='b')
                        str[i]='a';
                    else if((str[i+1]=='b'|| str[i+1]=='?') && str[i-1]=='c')
                        str[i]='a';

                    else if((str[i+1]=='c'|| str[i+1]=='?') && str[i-1]=='c')
                        str[i]='b';
                    else if((str[i+1]=='b'|| str[i+1]=='?') && str[i-1]=='b')
                        str[i]='c';
                    else if((str[i+1]=='a'|| str[i+1]=='?') && str[i-1]=='a')
                        str[i]='b';

                }

                else if(i==l-1)
                {
                    if(str[i-1]=='a')
                        str[i]='b';
                    else if(str[i-1]=='b')
                        str[i]='a';
                    else if(str[i-1]=='c')
                        str[i]='a';
                }
            }



        }

        for(int i=0; i<l; i++)
        {
            if(str[i]==str[i+1] || str[i]==str[i-1])
            {
                cout<<"-1"<<endl;
                c=1;
                break;
            }

        }
        if(c==0)
        {

            for(int i=0; i<l; i++)
            {
                cout<<str[i];
            }
            cout<<"\n";
        }
    }
    return 0;
}

