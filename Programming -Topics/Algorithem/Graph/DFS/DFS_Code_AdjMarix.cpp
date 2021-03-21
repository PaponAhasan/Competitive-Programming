#include<bits/stdc++.h>
using namespace std;

  #define WHITE 1
  #define GRAY 2
  #define BLACK 3

  int adj[100][100];
  int node,edge;
  int color[100];

  int Time=1;
  int Stime[100];
  int Ftime[100];

 void dfs_visit(int x)
 {
    color[x]=GRAY;
    Stime[x]=Time;
    ++Time;
    for(int i=0; i<node; i++)
    {
        if(adj[x][i]==1)
        {
            if(color[i]==WHITE)
            {
                dfs_visit(i);
            }
        }
    }
    color[x]=BLACK;

    Ftime[x]=Time;
    ++Time;
 }

 void dfs()
 {
    for(int i=0; i<node; i++)
    {
        color[i]=WHITE;
    }

    for(int i=0; i<node; i++)
    {
        if(color[i]==WHITE)
        {
            dfs_visit(i);
        }
    }
 }

 int main()
 {
    freopen("input.txt","r",stdin);
    cin>>node>>edge;

    int n1,n2;
    for(int i=0; i<edge; i++)
    {
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }

    dfs();

    cout<<"\n";

    for(int i=0; i<node; i++)
    {
        cout<<"Node: "<<(char)('A'+i)<<" "<<Stime[i]<<" "<<Ftime[i]<<endl;
    }
    return 0;
 }
