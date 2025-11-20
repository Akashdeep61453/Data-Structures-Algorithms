#include<iostream>
using namespace std;

#define MAX 100

class Graph{
    int n;
    int adj[MAX][MAX];  
    int visited[MAX];
    int key[MAX];
    int parent[MAX];

public:

    void input(){
        cout<<"Enter number of vertices: ";
        cin>>n;

        cout<<"Enter adjacency matrix";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>adj[i][j];
            }
        }

        for(int i=0;i<n;i++){
            visited[i] = 0;
            key[i] = 999999;
            parent[i] = -1;
        }
    }

    int findMin(){
        int mn = 999999, idx = -1;
        for(int i=0;i<n;i++){
            if(!visited[i] && key[i] < mn){
                mn = key[i];
                idx = i;
            }
        }
        return idx;
    }

    void prim(int start){
        key[start] = 0;

        for(int i=0; i<n; i++){
            int u = findMin();
            visited[u] = 1;

            for(int v=0; v<n; v++){
                if(adj[u][v] != 0 && !visited[v] && adj[u][v] < key[v]){
                    key[v] = adj[u][v];
                    parent[v] = u;
                }
            }
        }

        cout<<"Edges in MST "<<endl;
        int total = 0;
        for(int i=1;i<n;i++){
            cout<<parent[i]<<" - "<<i<<" : "<<adj[i][parent[i]]<<"\n";
            total += adj[i][parent[i]];
        }

        cout<<"Cost = "<<total<<endl;
    }
};

int main(){
    Graph g;
    g.input();
    g.prim(0);
    return 0;
}
