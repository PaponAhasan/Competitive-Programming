#include<bits/stdc++.h>
using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int node,edge;
int color[100];

int parent[100];
int dis[100];

void bfs(int x){
    for(int i=0;i<node;i++){
        color[i]=WHITE;
        dis[i]=INT_MIN;
        parent[i]=-1;
    }

    dis[x]=0;
    parent[x]=-1;

    queue<int>q;
    q.push(x);

    while(!q.empty()){
        int z;
        z=q.front();
        q.pop();
        color[z]=GRAY;

        cout<<z<<" ";

        for(int i=0;i<node;i++){
          if(adj[z][i]==1){
           if(color[i]==WHITE){
               dis[i]=dis[z]+1;
                parent[i]=z;
               q.push(i);
           }
        }
    }
        color[z]=BLACK;
 }
}


int main()
{
    freopen("input.txt","r",stdin);
    cin>>node>>edge;

    int n1,n2;
    for(int i=0;i<edge;i++){
         cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }

    bfs(0);
    cout<<"\n"<<parent[5]<<endl;
    cout<<dis[6]<<endl;
    return 0;
}

