#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;
    int* ar=(int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        // cin>>(ar+i);
        scanf("%d",ar+i);
        if(*(ar+i)==1)
        {
            cnt++;
            break;
        }
    }
    if(cnt)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
    return 0;
}
