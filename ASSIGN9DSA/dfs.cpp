#include <iostream>
using namespace std;

#define MAX 100

class Graph {
public:
    int V;
    int adj[MAX][MAX];
    int degree[MAX];   
    int visited[MAX];

    Graph(int v) {
        this->V = v;
        for (int i=0; i<V; i++) {
            degree[i] = 0;
            visited[i] = 0;
            for (int j=0; j<V; j++) {
                adj[i][j] = -1;
            }
        }
    }

    void addEdge(int u, int v, bool directed = false) {
        adj[u][degree[u]++] = v;

        if (!directed) {
            adj[v][degree[v]++] = u;
        }
    }

    void DFSS(int node) {
        visited[node] = 1;
        cout << node << " ";

        for (int i=0; i<degree[node]; i++) {
            int neighbor = adj[node][i];
            if (!visited[neighbor]) {
                DFSS(neighbor);
            }
        }
    }

    void DFS(int start) {
        cout << "DFS"<<endl;
        DFSS(start);
        cout << endl;
    }
};

int main() {
    Graph g(6);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 5);

    g.DFS(0);

    return 0;
}
