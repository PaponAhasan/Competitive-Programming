
#include<iostream>
#include<cstdio>
#include<string>
#include<ctype.h>
#include<conio.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include <map>
#include <set>
#include <bitset>
#include <math.h>
#include <sstream>
#include <stdlib.h>

using namespace std;

#define Arr_size 1000
#define Fre_size 1000

int L[Arr_size],freq[Fre_size];

int main()
{
    int N;
    cin>>N;

    for(int i=0; i<N; i++)
    {
        cin>>L[i];
        freq[i]=-1;
    }

    for(int i=0; i<N; i++)
    {
        int count=1;

        for(int j=i+1; j<N; j++)
        {
            if(L[i]==L[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

//    for(int i=0; i<N; i++)
//    {
//        if(freq[i] != 0)
//        {
//            printf("%d occurs %d times\n", L[i], freq[i]);
//        }
//    }

      int max=0;

      for(int i=0;i<N;i++){
            int tower=freq[i];
        if(max<tower)
            max=tower;

//            if(tower>1)
//                N=N-(tower-1);
      }

      int lengths=0;

      for(int i=0;i<N ;i++){
        if(freq[i]!=0)
            lengths++;
      }

      cout<<max<<" "<<lengths<<endl;;

    return 0;
}
