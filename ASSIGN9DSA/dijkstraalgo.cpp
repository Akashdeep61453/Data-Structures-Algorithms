#include<iostream>
using namespace std;

#define MAX 100
#define INF 999999

class Graph{
    int n;
    int adj[MAX][MAX];
    int dist[MAX];
    int visited[MAX];

public:

    void input(){
        cout<<"Enter number of vertices: ";
        cin>>n;

        cout<<"Enter adjacency matrix"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>adj[i][j];
            }
        }

        for(int i=0;i<n;i++){
            dist[i]= INF;
            visited[i]= 0;
        }
    }

    int findMin(){
        int mn = INF, idx = -1;
        for(int i=0;i<n;i++){
            if(!visited[i] && dist[i] < mn){
                mn = dist[i];
                idx = i;
            }
        }
        return idx;
    }

    void dijkstra(int src){
        dist[src] = 0;

        for(int i=0;i<n;i++){
            int u = findMin();
            visited[u] = 1;

            for(int v=0; v<n; v++){
                if(adj[u][v] != 0 && !visited[v] && dist[u] + adj[u][v] < dist[v]){
                    dist[v] = dist[u] + adj[u][v];
                }
            }
        }

        cout<<"Shortest Distances from Source "<<src<<endl;
        for(int i=0;i<n;i++){
            cout<<"to "<<i<<" = "<<dist[i]<<endl;
        }
    }
};

int main(){
    Graph g;
    g.input();
    g.dijkstra(0);
    return 0;
}
