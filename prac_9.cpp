#include <iostream>
using namespace std;

int a[10][10], n, visited[10];

void DFS(int v) {
    cout << v << " ";
    visited[v]=1;

    for(int i=0;i<n;i++)
        if(a[v][i] && !visited[i])
            DFS(i);
}

void BFS(int s) {
    int q[10], f=0, r=0, vis[10]={0};

    q[r++]=s;
    vis[s]=1;

    while(f<r) {
        int v=q[f++];
        cout << v << " ";

        for(int i=0;i<n;i++)
            if(a[v][i] && !vis[i]) {
                q[r++]=i;
                vis[i]=1;
            }
    }
}

int main() {
    int e,u,v;

    cout<<"Vertices: ";
    cin>>n;

    cout<<"Edges: ";
    cin>>e;

    for(int i=0;i<e;i++) {
        cin>>u>>v;
        a[u][v]=a[v][u]=1;
    }

    cout<<"DFS: ";
    DFS(0);

    cout<<"\nBFS: ";
    BFS(0);
}