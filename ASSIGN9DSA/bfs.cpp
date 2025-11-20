#include <iostream>
using namespace std;

#define MAX 100
#define MAX_EDGES 200 

class Graph {
public:
    int V;
    int adj[MAX][MAX]; 
    int degree[MAX]; 
    int visited[MAX];

    Graph(int v) {
        V = v;
        for (int i=0; i<V;i++) {
            degree[i] =0;
            visited[i] =0;
            for (int j =0; j<V; j++) {
                adj[i][j] =-1;
            }
        }
    }

    void addEdge(int u, int v, bool directed = false) {
        adj[u][degree[u]++] = v;

        if (!directed) {
            adj[v][degree[v]++] = u;
        }
    }

    void BFS(int start) {
        int queue[MAX];
        int front =0,rear =0;

        visited[start] =1;
        queue[rear++]=start;

        cout <<"BFS"<<endl;

        while (front<rear) {
            int node = queue[front++]; 
            cout<<node<<" ";

            for (int i =0; i <degree[node]; i++) {
                int neighbor =adj[node][i];
                if (!visited[neighbor]) {
                    visited[neighbor]= 1;
                    queue[rear++] =neighbor;
                }
            }
        }

        cout<<endl;
    }
};

int main() {
    Graph g(6);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 5);

    g.BFS(0);

    return 0;
}
