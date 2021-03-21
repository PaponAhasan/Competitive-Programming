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
#include <iomanip>

using namespace std;
#define Max_Size 10000

int main()
{
    int x[Max_Size];
    int n,chip=0,coin=0;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    for(int i=0;i<n;i++){
        if(x[i]%2==0){
            chip++;
        }
        else coin++;
    }

    if(chip<=coin)
        cout<<chip<<endl;
    else cout<<coin<<endl;

    return 0;
}
